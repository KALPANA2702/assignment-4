//wap to print cube of first 10 natural number
#include<stdio.h>
int main()
{
    int i=1,n;
    while(i<=10)
    {
          n=i*i*i;
          printf("\n");
        printf("%d",n);
        i++;
    }
    return 0;
}