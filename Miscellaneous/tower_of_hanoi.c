/* Implement Tower of Hanoi. */

#include <stdio.h>
#include <math.h>

void movedisk(char from, char to){  // move disk from one peg to another
    printf("Move disk from %c to %c\n", from, to);
}

void TOH(int n, char source, char aux, char dest){
    int tmoves = pow(2, n) - 1; // 2^n - 1 no. of moves required
    char peg[3] = {source, aux, dest};
    if (n % 2 == 0){  // if even no. of disks -- swap auxillary and destination pegs
        char temp = peg[1];
        peg[1] = peg[2];
        peg[2] = temp;
    }
    for (int move = 1; move <= tmoves; move++){
        int frompeg = (move & move - 1) % 3;
        int topeg = ((move | move - 1) + 1) % 3;
        movedisk(peg[frompeg], peg[topeg]);
    }
}

int main(){
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    TOH(n,'A','B','C');
    return 0;
}