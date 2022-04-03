#include<stdio.h>
int fibo(int n){
    if(n<=1){
        return n;
    }

    return fibo(n-2)+fibo(n-2);
}

int main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}