/* Write a program in C to find the pivot element of a sorted and rotated array using binary search.
 A pivot element divided a sorted rotated array into two monotonically increasing array. 
eg :--   4   5   6   7   0   1   2
                     ^-- PIVOT ELEMENT */

#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ll=0,ul=n-1,mid; // ll : lower limit || ul : upper limit
    if(a[ll]<=a[ul]){
        printf("No Pivot element i.e array is perfectly sorted");
    }
    else{
        while(ll<=ul){                  // BINARY SEARCH
            mid=ll+(ul-ll)/2;
            if(a[mid]>a[mid+1]){
                break;
            }
            if(a[mid-1]>a[mid]){
                mid-=1;
                break;
            }
            if(a[ll]<=a[mid]){  // means lower sub array is sorted
                ll=mid+1;
            }
            if(a[ul]>=a[mid]){  // means upper sub array is sorted
                ul=mid-1;
            }
        }
        printf("Pivot element is : %d ( found at index : %d )",a[mid],mid);
    }
}