/*Write a program to calculate overtime pay of 10 employees. Overtime 
is paid at the rate of rs 120.00 per hour for every hour worked above 40
hours. Assume that employees do not work for fractional part of an hour.*/
#include<stdio.h>
int main()
{
    float a;
    int h;
    int i=1;
    while(i<=10)
    {
        printf("Enter working hours: \n");
        scanf("%d",&h);
        if(h>=40)
            a = (h - 40)*120;
        else
            a = 0;
        printf("For %d hours worked the overtime pay is: %f\n",h,a);
        i++;
    }


    return 0;
}