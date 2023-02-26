//cobinations of three sets for a entered number.
#include<stdio.h>   
int main()
{
    
    int i=1,j=1,k=1,n;
    
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("The combinations are: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
                
                printf("%d%d%d \n",i,j,k);
        }
    }
    return 0;
}