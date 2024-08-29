#include<stdio.h>
int main()
{
    int r,c;
    int rS=3,cS=3;
    int mat[rS][cS];
    for(c=0;c<cS;c++)
    {
        int sum=0;
        for(r=0;r<rS;r++)
        {
            sum=sum +mat[r][c];
            printf("sum=%d\t",sum);
        }
        printf("\n");
    }
     return 0;
}