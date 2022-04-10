#include<stdio.h>
void check(int *arr,int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]>=0)
        i++;
        while(arr[j]<0)
        j--;
        if(i<j){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
}

void display(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
}

void main(){
    int arr[10]={-5,-5,8,4,3,0,-6,8,-10,20};
    check(arr,10);
    display(arr,10);
}