//distance converter:

#include<stdio.h>
int main()
{
    float km,cm,m,inch,ft;
    printf("Enter the distance in km: \n");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("Distance in meters: %.2fmeters \n",m);
    printf("Distance in centimeters: %.2fcm \n",cm);
    printf("Distance in inches: %finches \n",inch);
    printf("Distance in fts: %f ft \n",ft);
    return 0;
}