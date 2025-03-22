/* An array is a bitonic array if all integers from index 0 to index i are sorted in
ascending order, and all subsequent integers from index i+1 to n-1 are sorted in
descending order. Given a bitonic array of n distinct integers, write a C/C++ program to
find the maximum integer in the array in O(log(n)) time.
Example:
Input: n = 6 , A[] ={1 2 4 8 7 6}
Output: 8 */

#include <stdio.h>

int maximum(int a[], int n){
    int head = 0, end = n-1;
    int max = (head+end)/2;
    while (!((a[max-1]<a[max])&&(a[max+1]<a[max]))){
        if ((a[max-1]<a[max])&&(a[max]<a[max+1])){ //in ascending part
            head=max+1;
        }
        else if ((a[max-1]>a[max])&&(a[max]>a[max+1])){ //in descending part
            end=max-1;
        }
        max=(head+end)/2;
    }
    return a[max];
}

int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter a Bitonic Array of %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nMAX = %d",maximum(a,n));
    return 0;
}      