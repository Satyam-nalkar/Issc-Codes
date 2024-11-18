#include<stdio.h>
int main()
{
    int n;
    printf("Enter the marks ");
    scanf("%d",&n);
    if (n>0 && n<= 35)
    
      printf("grade =F\n");
    
    else if (n>35 && n<=40)
    
      printf("grade =P\n");
    
    else if (n>40 && n<=55)
    
       printf("grade =C\n");
    
    else if (n>55 && n<=65)
    
      printf("grade =B\n");
    
    else if(n>65 && n<=85)
    
         printf("grade =A\n");
    
    else
        printf("grade =O\n");
    return 0;
    
}