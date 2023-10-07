#include<stdio.h>
int main()
{
  int n;
  printf("Enter maximum level:\n");
  scanf("%d",&n);
  printf("The Zero-One triangle with %d levels is:\n",n);
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      if((i+j)%2==0)
      {
        printf("1 ");
      }
      else
      {
        printf("0 ");
      }
    }
    printf("\n");
  }
  return 0;

}
