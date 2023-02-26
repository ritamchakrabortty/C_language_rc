/*A company insures its drivers in the following cases
-if the driver is married. 
-if the driver is unmarried, male and above 30 years of age.
if the driver is unmarried, female and above 25 years of age.
*/
#include<stdio.h>
int main()
{
    char sex,m;
    int a;
    
    printf("Enter age, sex and('f'for female or 'm'for male) Enter marital status('M'for married or 'U'for unmarried): \n");

    scanf("%d",&a);
    scanf(" %c",&sex);
    scanf(" %c",&m);
    
    if((m == 'M')||(m == 'U' && sex == 'f' && a >25)||(m == 'U' && sex == 'm'&& a >30))
        printf("Driver should be insured.\n");
    else
        printf("Driver should not be insured.\n");
    return 0;

}