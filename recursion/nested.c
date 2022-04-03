#include<stdio.h>
int fun(int n){
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}

int main(){
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);
    printf("%d",fun(num));
    return 0;

}