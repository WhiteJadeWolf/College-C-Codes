/* Given an array, arr[]. Sort the array using bubble sort algorithm.

Examples :--
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  */

#include <stdio.h>
#include <stdlib.h>

int *bubblesort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main(){
    while(1){
        printf("\nEnter your Choice :--\n1 - Sort input array by Bubble Sort\n2 - Exit\nChoice : ");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
                {
                int n;
                printf("Enter the no. of elements in the array : ");
                scanf("%d",&n);
                int arr[n];
                printf("Enter %d numbers : ",n);
                for(int _ = 0; _ < n; _++){
                    scanf("%d",&arr[_]);
                }
                int *res = bubblesort(arr,n);
                printf("Sorted Array : ");
                for(int _ = 0; _ < n; _++){
                    printf("%d ",res[_]);
                }
                printf("\n");
                }
                break;
            case 2: exit(0);
                    break;
            default : printf("INVALID CHOICE - TRY AGAIN.");
        }
    }
}