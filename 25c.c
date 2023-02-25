/*Two numbers are entered through the keyboard. Write a program 
to find the value of one number raiseed to the power of another.*/
#include<stdio.h>
int main()
{
    int x,i;
    float y,result;
    printf("Enter first number: \n");
    scanf("%f",&y);
    printf("Enter second number: \n");
    scanf("%d",&x);
    i = result = 1;
    while(i<=x)
    {
        result=result*y;
        i++;

    }
    printf("\n");
    printf("%.2f to the power %d is: \n",y,x);
    printf("%.2f",result);
    return 0;
}
