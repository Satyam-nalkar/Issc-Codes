#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the even integer");
    scanf("%d",&n);
    printf("Print the even integer from 1 to %d\n",n);
    for(i=1;i<=n;i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n",i);
        }        
    }
    return 0;

}