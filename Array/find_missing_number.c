

#include<stdio.h>
//if starts from 0...........
void find1(int* arr,int n){
    int sum = (n*(n+1))/2;
    int total=0;
    for (int i = 0; i < n; i++)
    {
        total = total+arr[i];
    }
    printf("%d",sum-total);
    
}

// if starts from any number............
void find2(int* arr,int n){
    int diff = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff){
            printf("%d ",diff+i);
            break;
        }
    }
}

void main(){
    int arr[7]={1,2,4,5,6,7};
    int arr1[7]={3,4,5,7,8,9};
    find1(arr,7);
    find2(arr1,7);
}