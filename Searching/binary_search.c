#include<stdio.h>
struct array
{
    int *A;
    int size;
};
int Bsearch(struct array* arr,int num,int l, int u){
   
    if (l<=u)
    { int mid = (l+u)/2;
         if(arr->A[mid]==num){
        return mid; 
    }
     if(arr->A[mid]<num){
    return Bsearch(arr,num,mid+1,u);}
     if(arr->A[mid]>num){
    return Bsearch(arr,num,l,mid-1);}
    }
    
   
    return -1;

}
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
    printf("%d",Bsearch(&arr,num,0,arr.size-1));
    return 0;

}