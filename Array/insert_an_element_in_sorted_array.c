#include<stdio.h>
void insert(int *A,int n,int num){
    int i=n-1;
    while(A[i]>num){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=num;
}
void display(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
}
int main(){

    int arr[10]={1,5,10,21,22,30};
    insert(arr,6,15);
display(arr,7);
return 0;
}