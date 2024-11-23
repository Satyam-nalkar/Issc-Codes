#include<stdio.h>
#include<math.h>
int main()
{
 double x;
 double a,b,result;
 printf("Enter the value of x");
 scanf("%lf",&x);
 a=x*x*x;
 b=x*x;
  if(b==0)
  {
 printf("division by 0 is not allowed\nd");
 return 1;
  result=(a+2*b+3*(x+0)*(x+1))/sqrt(b);
  printf("a = %f\n",a);
  printf("b = %f\n",b);
  printf("The answer is %f\n",result);
  }
  return 0;
}