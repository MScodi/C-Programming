#include <stdio.h>

int main()
{   int n, binary, rem,d, j=1,dec =0;
    printf("Enter the number in binary\n");
    scanf("%d",&n); // Take care of &&&
    binary=n;
    while(n>0){
        rem=n%10;
        d=rem*j;
        dec+=d;
        j=j*2;
        n=n/10;
    }
    printf("%d",dec);

    return 0;
}
