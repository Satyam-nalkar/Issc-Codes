#include<stdio.h>
void factors(int i,int n);
int main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if(n % i==0)
        {
         factors(i,n);
        }
    }
    return 0;
}
  void factors( int i, int n)
  {
    printf("%d\n",i);
  }