#include<stdio.h>
 int main()
 {
    int a;
    printf("Enter the integer");
    scanf("%d",&a);
    if(a>=100 && a<=200)
    {
     int result=a+50;
      if(result<200)
      {
        printf("small number\n");
      }
      else
      {
        printf("big number\n");
       }
    }
     return 0;
 }