//calculation of profit or loss.
#include<stdio.h>
int main()
{
    float cp,sp,p,i;
    printf("Enter cost price: \n");
    scanf("%f",&cp);
    printf("Enter selling price: \n");
    scanf("%f",&sp);
    p=(sp-cp);
    i=(cp-sp);
    if(p>0)
        printf("The seller made a profit of %.2fRs",p);
    else if(p<0)
        printf("The seller incurred a loss of %.2fRs",i);
    else if(p == 0)
        printf("There is no profit no loss.\n");
    else
        printf("ERROR");
    return 0;
}