/* WITHOUT USING INBUILT STRING FUNCTIONS, COPY ONE STRING INTO ANOTHER */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char *a =(char *)malloc(500 * sizeof(char));
    char *b=(char *)malloc(500 * sizeof(char));
    printf("Enter your string: ");
    fgets(a,500,stdin);
    a[strcspn(a, "\n")]='\0';
    printf("Initial Values of string:\n");
    printf("A : %s\n",a);
    printf("B : %s\n",b);
    for(int i=0;i<strlen(a);i++){
        *(b+i)=*(a+i);
    }
    printf("Final Values:\n");
    printf("A: %s\n",a);
    printf("B: %s\n",b);
    free(a);
    free(b);
}