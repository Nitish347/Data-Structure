//in order of n

#include<stdio.h>
void findPair(int* A,int n,int num){
    int H[100];
    for(int i=0;i<n;i++){
        if(H[num-A[i]]!=0){
            printf("%d + %d = %d \n",A[i],num-A[i],num);
        }
        H[A[i]]++;
    }
}
void main(){
    int arr[7]={1,2,3,4,5,6,7};
    findPair(arr,6,7);
}