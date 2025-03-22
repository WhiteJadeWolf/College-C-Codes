/*   (A GUESSING GAME): With this program the user has to guess a number that the program has picked as the lucky number. It uses one for loop and plenty of if 
statements. I’ve also thrown in a conditional operator, just to make sure you haven’t forgotten how to use it!  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int randno(int n){           // macro for generating random no.
    srand(time(NULL));
    int x=rand()%(n+1);
    return x;
}

void main(){
    printf("Enter limit of digits of the lucky no. : ");
    int m,n;
    scanf("%d",&m);
    n=pow(10,m);
    int r=randno(n);
    int c=0;
    for(;;){
        int g;
        printf("Enter your guess : ");
        scanf("%d",&g);
        c+=1;
        if(g==r){
            printf("CONGRATULATIONS!! YOU GUESSED THE LUCKY NO. %d in %d TRIES!!",r,c);
            break;
        }
        else if(g<r){
            if(g<(r-100)){
                printf("Your guess is too small\n");
            }
            else if(g<(r-50)){
                printf("Your guess is small\n");
            }
            else if(g<(r-10)){
                printf("Your guess is a bit small\n");
            }
            else{
                printf("You are very close (guess a bit higher)\n");
            }
        }
        else if(g>r){
            if(g>(r+100)){
                printf("Your guess is too big\n");
            }
            else if(g>(r+50)){
                printf("Your guess is big\n");
            }
            else if(g>(r+10)){
                printf("Your guess is a bit big\n");
            }
            else{
                printf("You are very close (guess a bit lower)\n");
            }
        }
    }
}