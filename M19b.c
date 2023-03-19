#include <stdio.h>
#include<stdlib.h>
int max,min,c=0;
int *a;
void maxmin(int i,int j)
{
    int max1,min1,mid;
    if(i==j)
    {
        max=min=a[i];
    }
    else if(i==j-1)
        {
           if(a[i]>a[j])
           {
               max=a[i];
               min=a[j];
           }
           else
           {
                min=a[i];
                max=a[j];
           }
        }
    else
        {
            mid=(i+j)/2;
            maxmin(i,mid);
            max1=max;
            min1=min;
            maxmin(mid+1,j);
            if(max<max1)
            {
                max=max1;
            }
            if(min1<min)
            {
                min=min1;
            }
        }
    }
    

int main() {
    // Write C code here
    int num;
    printf("Enter the size of the array: \n");
    scanf("%d",&num);
    a=(int *)malloc(num*sizeof(int));
    printf("Enter the elements of the array: \n");
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    maxmin(0,num-1);
    printf("The minimum element is:%d \n",min);
    printf("The maximum element is:%d \n",max);
    return 0;
}