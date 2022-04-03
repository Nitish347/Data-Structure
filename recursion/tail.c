#include<stdio.h>
void num(int n){
   if(n>0){
       printf("%d ",n);
       num(n-1);
   }
}

int main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    num(n);
    return 0;
}