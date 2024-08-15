#include <stdio.h>

int main() 
 {   int i;
    float f;
    double d;
    long double ld;
    char c;
    printf("Enter the number:",i,f,d,ld,c);
    scanf("%d\n %f\n %lf\n %Lf\n %c\n",&i,&f,&d,&ld,&c);
    printf("int :%d\n",i);
    printf("float :%f\n",f);
    printf("double :%lf\n",d);
    printf("long double :%Lf\n",ld);
    printf("char :%c\n",c);
 }
