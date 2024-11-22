#include<stdio.h>
int main()
{
    char str[10];
    for (int i = 0; i < 10; i++)
    {
          scanf("%c",&str[i]);
    }
       for (int i = 0; i < 10; i++)
        {
          printf("%c",str[i]);
        }
    
    
    return 0;
}