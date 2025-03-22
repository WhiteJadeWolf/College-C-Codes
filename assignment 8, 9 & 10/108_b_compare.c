/* WITHOUT USING INBUILT STRING FUNCTIONS, COMPARE TWO STRINGS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    int flag=1;
    char *a=(char*)malloc(500 * sizeof(char));
    char *b=(char*)malloc(500 * sizeof(char));
    if(a==NULL || b==NULL){
        printf("Memory allocation failed");
        return -1;
    }
    printf("Enter 1st string : ");
    fgets(a,500,stdin);
    a[strcspn(a,"\n")]='\0';
    printf("Enter 2nd string:");
    fgets(b,500,stdin);
    b[strcspn(b,"\n")]='\0';

    int freq1[52]={0};
    int freq2[52]={0};

    for(int i=0;i<strlen(a);i++){
        freq1[a[i]-'a']++;
    }
    for(int i=0;i<strlen(b);i++){
        freq2[b[i]-'a']++;
    }

    for(int i=0;i<52;i++){
        if(freq1[i]!=freq2[i]) {
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Strings are Equal");
    }
    else{
        printf("Strings are not equal");
    }
    free(a);
    free(b);
}