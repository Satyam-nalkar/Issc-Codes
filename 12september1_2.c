#include<stdio.h>
#include <stdlib.h>
int main()
{
    int nums,i,*ptr;
    printf("enter the number of element");
    scanf("%d",&nums);
    ptr=(int*)malloc(nums*sizeof(int));
    printf("enter the value:\n");
    for(i=0;i<nums;i++)   
    {
     scanf("%d",(ptr+i));
    }
    printf("the entered value are:\n");
    for(i=0;i<nums;i++)
    {
        printf("%d\t",*(ptr+i));
    }
      if(*ptr==*ptr)
      {
      printf("true\n");
      }
      else
      {
        printf("false\n");
      }

    free(ptr);
}