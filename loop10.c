#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter two integer");
    scanf("%d %d",&m,&n);
    if (m<n)
    {
        printf("Number between %d and %d are\n",m,n);
        for ( i=m+1;i<n; i++)
        { 
        printf("%d\n",i);
        }

    }
    else
    {
        printf("always must be m is less than n\n");
    }
    return 0;
}