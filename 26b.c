//Generate all prime numbers from 1 to entered number
#include <stdio.h>
int main()
{
    int x,i,n=1;
    printf("Enter the last number: \n");
    scanf("%d",&x);
    printf("\nPrime numbers between 1 and %d are:\n1\t",x);
    for(n=1;n<x;n++)
    {
        i=2;
        for(i=2;i<n;i++)
        {
            if(n%i == 0)
                break;
        }
        if(i==n)
            printf("%d\t",n);
    }
    return 0;
}