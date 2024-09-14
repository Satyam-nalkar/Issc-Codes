#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of row:");
    scanf("%d", &r);
    printf("Enter the number of col:");
    scanf("%d",&c);
    int **mat=(int**)malloc(r*sizeof(int*));
       for (i=0;i<r;i++)
       {
         mat[i]=(int*)malloc(r*sizeof(int));
         if(mat[i]==NULL)
         {
           printf("Not memory allocated\n");
           return 1;
         }
       }
       for (j=0;j<c;j++)
       {
         mat[j]=(int*)malloc(c*sizeof(int));
         if(mat[j]==NULL)
         {
           printf("Not memory allocated\n");
           return 1;
         }
       }
     printf("Enter the elment for matrix:\n");
     for (i=0;i<r;i++)
    {
       for (j=0;j<c;j++)
       {
         scanf("%d",&mat[i][j]);
       }  
    }
    printf("The matrix is :\n");
    for (i=0;i<r;i++)
    {
       for (j=0;j<c;j++)
       {
         printf("%d\t",mat[i][j]);
       }
       printf("\n");
    }
    free(mat);
    return 0;
}