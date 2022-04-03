#include<stdio.h>
void num(int n){
    if(n>0){
        num(n-1);
        printf("%d ",n);
    }
}

int main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    num(n);

}