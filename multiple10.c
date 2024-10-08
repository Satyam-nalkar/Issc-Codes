#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter an integer");
    scanf("%d",&n);
       printf("multiple of 10 up to %d \n",n);
       for ( i = 10; i <= n; i++)
        {
          if(i%10==0)
          {
           printf("multiple of 10 is:");
           printf("%d\n",i);
          }
        }
     return 0;
}