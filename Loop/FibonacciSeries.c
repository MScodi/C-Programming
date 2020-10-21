/******************************************************************************
Fibonacci Series is 1,1,2,3,5,8,13,34,55,89,..........etc.

*******************************************************************************/
#include <stdio.h>

int main()
{   long x,y,z;
    x=0;
    y=1;
    int a;
    printf("upto which number you want to create Series : ");
    scanf("%d",&a);
    printf("%ld ",y);
    for(int i=0; i<a; i++){
        z=x+y;
        printf("%ld ",z);
        x=y;
        y=z;
        
        
    }
}
