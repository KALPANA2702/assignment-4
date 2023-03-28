//wap to print 10 odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n=10,i;
    while(n>=1)
    {
        i=2*n-1;
        printf("\n");
    printf("%d",i);
    n--;
    }
return 0;
}