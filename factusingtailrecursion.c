#include<stdio.h>
int factorial(int n,int a)
{
	if(n==1)
		return a;
	else
		return(factorial(n-1,n*a));
		
}
int main()
{
	int b,c;
	printf("Enter the element to do factorial: \n");
	scanf("%d",&b);
	c=factorial(b,1);
	printf("Factorial value is: %d",c);
	return 0;
}


