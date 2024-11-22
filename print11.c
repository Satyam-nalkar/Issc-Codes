#include<stdio.h>
int main()
{
    int a;
    float f;
    double d;
    long double l;
    char c;
    printf("Enter the number");
    scanf("%d\n %f\n %lf\n %LF\n %c\n",&a,&f,&d,&l,&c);
    printf("%d\n %f\n %lf\n %LF\n %c\n",a,f,d,l,c);
    return 0;
}