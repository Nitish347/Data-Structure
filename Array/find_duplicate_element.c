//for sorted Array

#include<stdio.h>
void findD(int* A,int n){
    int lastDuplicate =0;
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1] && A[i]!=lastDuplicate){
            printf("%d  ",A[i]);
            lastDuplicate = A[i];
        }
    }
}

void main(){
    int arr[8]={1,2,2,3,5,4,4,4,};
    findD(arr,8);
}