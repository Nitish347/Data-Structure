#include<stdio.h>
int Lsearch(int* arr, int n,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==n)
        return i;
    } 
    return -1;
}
struct array
{
    int *A;
    int size;
};

int main(){
    struct array arr;
    printf("enter the size of the array: \n");
    scanf("%d",&arr.size);
    arr.A = (struct array*) malloc(arr.size*sizeof(int));
    printf("enter the elements:\n");
    for(int i=0;i<arr.size;i++){
        scanf("%d",&arr.A[i]);
    }
    int num;
    printf("enter the elements to be searched: \n");
    scanf("%d",&num);
    printf("%d",Lsearch(arr.A,num,arr.size));
    return 0;

}