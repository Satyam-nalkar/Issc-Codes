#include<stdio.h>
int main()
{
    int first=0;
    int second=1;
    int count=1;
    int next;
    printf("Fibonacci sequence up to the 10th term:\n");
    while(count<=10)
    {
        if(count==1)
        {
            printf("%d\n",first);
        }
        else if(count==2)
        {
            printf("%d\n",second);            
        }
        else
        {
          next=first+second;
          printf("%d\n",next);
          first=second;
          second=next;
        }
        count++;
    }
    return 0;
}