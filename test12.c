#include<stdio.h>
#include<stdlib.h>
void merge(int *L, int *R, int nL, int nR,int *A)
{
    int i=0;
    int j=0;
    int k=0;
    while (i<nL && j<nR)
    {
        if (L[i]<R[j])
        {
            A[k] = L[i];
            i++;


        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i<nL)
    {
        
        A[k] = L[i];
        i++;
        k++;
    }
    while (j<nR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
    
  return;  
        
    
    
}
void mergesort(int *A,int N)
{
    if(N<2)
    return;
  int mid = N/2;
  int L[mid],R[N-mid];
  for(int k=0;k<mid;k++)
    {
        L[k] = A[k];
    }
  for(int p=mid;p<N;p++)
    {
        R[p-mid] = A[p];

    }
mergesort(L,mid);
mergesort(R,N-mid);
merge(L,R,mid,N-mid,A);  
      
}
int main()
{
    int N;
    printf("Enter the size of the array: ");
    scanf("%d",&N);
    int *A;
    A=(int*)malloc(N*sizeof(int));
    printf("Enter the the elements of the array: ");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    mergesort(A,N);
    printf("The sorted array is:\n");
    {
        for(int i=0;i<N;i++)
        {
            printf("%d ",A[i]);
        }
    }
    return 0;
}
/*
#include<stdio.h>

int main()
{
    int N;
    printf("Enter the no:");
    scanf("%d",&N);
    int i;
    
    for(i=0;i<=N;i++){

    
        printf("*%d\n",i);
    
    }
    return 0;
}*/