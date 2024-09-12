#include<stdio.h>
 void namaste();
 void bonjour();
int main()
{
    printf("Enter f for french & i for indian:");
   char c;
   scanf("%c",&c);
   if(c=='i')  // singal quote identify singal character 
   {
    namaste();
   }
   else
   {
    bonjour();
   }


   return 0;
}
  void namaste()
  {
    printf("Namaste\n");
  }
  void bonjour()
  {
    printf("Bonjour\n");
  }

  