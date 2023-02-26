//Grade for students 
#include<stdio.h>
int main()
{
    int m0, m1, m2, m3, m4,p;
    printf("Enter marks for subject 1(full marks is 100):  \n");
    scanf("%d", &m0);
    printf("Enter marks for subject 2(full marks is 100):  \n");
    scanf("%d", &m1);
    printf("Enter marks for subject 3(full marks is 100):  \n");
    scanf("%d", &m2);
    printf("Enter marks for subject 4(full marks is 100):  \n");
    scanf("%d", &m3);
    printf("Enter marks for subject 5(full marks is 100):  \n");
    scanf("%d", &m4);
    p=(m0+m1+m2+m3+m4)*100/500;
    if(p>=60)
        printf("First division.\n");
    else if(p>=50)
        printf("Second division.\n");
    else if(p>=40)
        printf("Third division.\n");
    else
        printf("Fail\n");
    
    return 0;

}