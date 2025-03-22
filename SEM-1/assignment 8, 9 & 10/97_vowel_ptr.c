/* WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.*/
#include <stdio.h>
#include<string.h>
void main()
{
    printf("Enter the string : ");
    char str[100],*ptr;
    gets(str);
    int len=strlen(str);
    strlwr(str);
    ptr=str;
    int v=0,ws=0;
    for(int i=0;i<len;i++){
        if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u'){
            v++;
        }
        else if((*(ptr+i))==' '){
            ws++;
        }
    }
    printf("No. of Vowels : %d\nNo. of Consonants : %d",v,len-v-ws);
}