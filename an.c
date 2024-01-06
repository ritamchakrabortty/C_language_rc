#include <stdio.h>    
int main(){    


    int a=5,b=9,c=3,f=0,r=6;

    f+=++r+(r++ / c--)*(--b/c*a);
    //f+=++r+(6/3)*(8/2*5);  r++ will increment the value of r to 7 and c-- will decrement the value of c to 2
    //f+=8+2*20;
    //f+=8+40;
    //f = 0+48;
    //f= 48;
    printf("%d\n",f);
    //printf("Hello World!");    
return 0;   
}  