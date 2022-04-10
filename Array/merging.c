

///// wrong answer.........................

#include <stdio.h>
void merge(int *A, int *B, int *C, int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (A[i] > B[j])
        {
            C[k++] = B[j++];
            // printf("%d",j);
        }
        else
        {
            C[k++] = A[i++];
            printf("%d",i);
        }
       
    }
    printf("%d  %d",i,j);
    printf("\n");
    for (i; i < n1; i++)
    {
        C[k++] = A[i];
    }
    for (j; j < n2; j++)
    {
        C[k++] = B[j];
    }
}

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
}

void main()
{
    int arr1[5] = {1,3,5,6,7};
    int arr2[6] = {2,5,9,11,15,20};
    int arr3[11];
    merge(arr1, arr2, arr3, 5, 6, 11);
    display(arr3, 10);
}