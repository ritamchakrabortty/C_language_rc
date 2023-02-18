// #include<stdio.h>
// int main()
// {
//     int i,j;
//         for(i=1;i<=4;i++)
//         {
//             for(j=1;j<=i;j++)
//             {
//                 printf("%d",j);
            
//             }
//             printf("\n");
//         }
//          return 0;
// }
// #include<stdio.h>
// int main()
// {
    
//     int n=4;
//     for(int i=1;i <= n;i++){

//         for(int j=i;j <= n-i;j++){
//         printf(" ");
//         }
//         for(int k=1;k <= i;k++){
//         printf("%d",k);
//         }
//         printf("\n");

//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i,j,k,p=0;
    for(i=1;i<=3;i++)
    {
            for(k=2;k>=i;k--)
            {
                printf(" ");
            }
            for(j=1;j<=i+p;j++)
            {
                printf("%d",j);
            }
            p++;
                printf("\n");
    }
    return 0;
}