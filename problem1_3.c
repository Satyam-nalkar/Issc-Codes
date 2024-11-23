#include<stdio.h>
#include<math.h>
int main()
{
    double x,a,b,result;
    printf("Enter the value of x");
    scanf("%lf",&x);
    a=x*x*x;
    b=x*x;
    if(b==0)
    {
        printf("Enter the value of x");
        return 1;
        result = 10+(a+(6*b)+(x+1)*(x))/sqrt(2);
        printf("a=%lf\n",a);
        printf("b=%lf\n",b);
        printf("The answer is%f",result);
    }
     return 0;


}
