//wap to print table of 5
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("the table of 5 is");
    while(i<=10)
    {
          n=i*5;
          printf("\n");
        printf("5*%d=%d",i,n);
        i++;
    }
    return 0;
}