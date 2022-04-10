#include<stdio.h>
void check(int *A,int n){
    int i=0;
    for (i ; i <n-1; i++)
    {
        if(A[i+1]<A[i]){
        printf("not Sorted\n");
        break;
        }

    }
    if(i==n-1)
    printf("sorted\n");
    
}

void main(){
    int arr[10]={1,2,3,4,5,6,7};
    int arr1[10]={1,5,3,2,5,4,6,8};
    check(arr,7);
    check(arr1,8);
}