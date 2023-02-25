//calculation of simple interest for 3 sets of p,n,r
#include<stdio.h>
int main()
{
    int p,n,c;
    float r,si;
    for(c=1;c<=3;c++)
    {
        printf("Enter values of capital,time and rate of interest: \n");
        scanf("%d%d%f",&p,&n,&r);
        si = p*n*r/100;
        printf("\n");
        printf("Simple interest: \n");
        printf("%.2fRs\n",si);
        return 0;
    }
}