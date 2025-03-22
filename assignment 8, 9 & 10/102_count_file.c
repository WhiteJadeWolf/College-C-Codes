/* WRITE A  C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp=fopen("file.txt", "w");
    char c;
    if (fp==NULL) {
        printf("File Not Found\n");
        return -1;
    }
    printf("Enter your text :-- \n");
    while ((c = getchar())!='\n') {
        putc(c,fp);
    }
    fclose(fp);
    int cha=0,line=1,word=0,in_word=0;
    fp=fopen("file.txt","r");
    if (fp==NULL){
        printf("File Not Found");
        return -1;
    }
    while ((c=getc(fp))!=EOF) {
        cha++;
        if (c==' ' || c=='\t' || c=='\n'){
            if(in_word){
                word++;
                in_word = 0;
            }
            if(c=='\n'){
                line++;
            }
        }
        else{
            in_word=1;
        }
    }
    if(in_word){
        word++;
    }
    printf("Number of characters : %d\n",cha);
    printf("Number of words : %d\n",word);
    printf("Number of lines : %d",line);
    fclose(fp);
    return 0;
}