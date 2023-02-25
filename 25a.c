/*Write a c program to calculate total expenses. While purchasing certain items a 
discount of 10% is offered if the quantity purchased is more than 1000.*/
#include<stdio.h>
int main()
{
    int d,p;
    float rate,total;
    printf("Enter quantity: \n");
    scanf("%d",&p);
    printf("Enter the rate of purchase: \n");
    scanf("%f",&rate);
    if(p>1000)
        d=10;
    else
        d=0;
    total = ((rate*p) - (rate*d*p/100));
    printf("Total expenses is: \n");
    printf("%.2f",total);
    return 0;
}