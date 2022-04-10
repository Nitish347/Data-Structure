#include<stdio.h>

struct Matrix{
    int A[10];
    int n;
};

void createDM(struct Matrix *m,int i,int j,int x){
    if(i==j)
    m->A[i-1]=x;
}

int getDM(struct Matrix *m,int i,int j){
    if(i==j)
    return m->A[i-1];
    else
    return 0;

}


void displayDM(struct Matrix *m){
for(int i=0;i<m->n;i++){
    for(int j=0;j<m->n;j++){
        if(i==j)
        printf("%d ",m->A[i]);
        else
        printf("0 ");
    }
    printf("\n");
}
}
void main(){
    struct Matrix mtx;
    mtx.n=3;
    createDM(&mtx,1,1,3);
    createDM(&mtx,2,2,5);
    createDM(&mtx,3,3,8);
    printf("%d\n",getDM(&mtx,2,2));
    displayDM(&mtx);
}