#include<stdio.h>

void reverse(int *A,int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=temp;
    }
}
void display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int arr1[5]={1,2,3,4,5};
    reverse(arr,6);
    reverse(arr1,5);
    display(arr,6);
    display(arr1,5);
    return 0;

}

