/*calculate the factorial value of a entered number.*/

#include<stdio.h>
int main()
{
    int num,fact;
    printf("Enter a number to calculate factorial: \n");
    scanf("%d",&num);
    int i;
    i= fact = 1;
    while(i<=num)
    {
        fact = fact*i;
        i++;
    }
    printf("The factorial value of number %d is: %d\n",num,fact);
    return 0;
}
