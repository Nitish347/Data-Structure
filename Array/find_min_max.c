#include<stdio.h>
void min_max(int* A,int n){
    int min=A[0],max=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>max){
            max = A[i];
        }
        else if(A[i]<min){
            min = A[i];
        }
    }
    printf("%d is minimum And %d is maximum",min,max);
}

void main(){
    int arr[7]={1,2,5,4,3,6,9};
    min_max(arr,7);
}