/* WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char c;
    fp=fopen("file.txt","w");
    if(fp==NULL){
        printf("Failed to create file!");
        return -1;
    }
    printf("Enter the data :-- \n");
    while((c=getchar())!='\n'){
        fputc(c,fp);
    }
    fclose(fp);
    fp=fopen("file.txt","r");
    if(fp==NULL){
        printf("Failed to open file!");
        return -1;
    }
    int count=0;
    while((c=fgetc(fp))!=EOF){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    printf("Number of vowels: %d", count);
    fclose(fp);
    return 0;
}