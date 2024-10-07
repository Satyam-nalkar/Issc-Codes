#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter an integer");
    scanf("%d",&n);
       printf("multiple of 3 up to %d \n",n);
       for ( i = 3; i <= n; i++)
        {
          if(i%3==0)
          {
           printf("multiple of 3 is:");
           printf("%d\n",i);
          }
        }
     return 0;
}