/* WITHOUT USING INBUILT STRING FUNCTIONS, CONCATENATE TWO STRINGS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char *a=(char *)malloc(500 * sizeof(char));
    char *b=(char *)malloc(500 * sizeof(char));
    char *c=(char *)malloc(1000 * sizeof(char));
    if(a==NULL || b==NULL || c==NULL){
        printf("Memory allocation failed!");
        return -1;
    }
    printf("Enter String 1 : ");
    fgets(a,500,stdin);
    a[strcspn(a, "\n")]='\0';
    printf("Enter String 2 : ");
    fgets(b,500,stdin);
    b[strcspn(b, "\n")]='\0';

    for(int i=0;i<1000;i++){
        if(i < strlen(a)){
            *(c + i)=*(a + i);
        }
        else{
            *(c + i)=*(b + i - strlen(a));
        }
    }
    printf("Concatenated String: ");
    printf("%s",c);
    free(c);
    free(a);
    free(b);
}