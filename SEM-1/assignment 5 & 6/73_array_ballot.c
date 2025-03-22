/* An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate number on the ballot paper. 
Write a program to read the ballots and count the votes cast for each candidate using an array variable count. In case, a number, read is outside the range 1 to 5, 
the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots. */

#include <stdio.h>
void main(){
    int vc[6]={0}; // first index is for spoilt ballot
    int n;
    printf("Enter no. of ballots : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int bm;
        printf("Enter marking on ballot : ");
        scanf("%d",&bm);
        switch(bm){
            case 1 :vc[1]++;
                    break;
            case 2 :vc[2]++;
                    break;
            case 3 :vc[3]++;
                    break;
            case 4 :vc[4]++;
                    break;
            case 5 :vc[5]++;
                    break;
            default:vc[0]++;
                    break;
        }
    }
    printf("\nBALLOT RESULT :--\n");
    for(int i=1;i<=5;i++){
        printf("Candidate %d got %d votes\n",i,vc[i]);
    }
    printf("Spoilt Ballots count : %d\n",vc[0]);
}