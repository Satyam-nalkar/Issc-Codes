#include<stdio.h>
int main()
{ 
    int r,c;
    int mat[r][c];
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
      {
         printf("%d\t",mat[r][c]);
      }
      printf("\n");
    }
      return 0;

}
