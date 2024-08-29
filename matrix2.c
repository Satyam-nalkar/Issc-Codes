#include<stdio.h>
int main()
{
    int r,c;
    int rS=3,cS=3;
    int mat[rS][cS];
    for(r=0;r<rS;r++)
    {
        int sum=0;
        for(c=0;c<cS;c++)
        {
            sum +=mat[r][c];
        }
        printf("sum=%d\n",sum);
    }
    return 0;


}