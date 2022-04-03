#include<stdio.h>

void fun1(int n){
    if(n>0){
        printf("%d",n*2);
        fun2(n-1);
    }
}

void fun2(int m){
    if(m>0){
        printf("%d",m*3);
        fun1(m-1);
    }
}

int main(){
    int num;
    printf("enter the number: \n");
    scanf("%d",&num);
    fun1(num);
    return 0;
}