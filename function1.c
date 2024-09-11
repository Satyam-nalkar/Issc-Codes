#include<stdio.h>
void printGoodbye();
void printHello();
int main()
{
    printHello();  //first call hello then goodbye
    printGoodbye(); // second print good bye
  return 0;
}
 void printGoodbye()  // not semicolon
   {
    printf("Good bye\n");
   }
   void printHello()  // not semicolon
    {
    printf("Hello\n");
    }