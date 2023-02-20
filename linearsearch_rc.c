#include<stdio.h>
int main()
{
    int s,item,index=-1;
    printf("Enter the size of the array:");
    scanf("%d",&s);

    int arr[s];
    printf("\nEnter the array elements:");
    for(int i=0; i<s; i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched: \n");
    scanf("%d",&item);



    for(int i = 0; i<s;i++)
    {
        if (item == arr[i])
        {
            printf("\nElement found at index %d",i);
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        printf("Element not found.");
    }
    return 0;
}