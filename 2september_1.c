#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter 5 number:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
   
    int sum=0;
    for(i=0;i<5;i++)
    {
    sum=sum+a[i];
    }
    printf("the sum is: %d\n",sum);
    
    int product=i;
    for(i=0;i<5;i++)
    {
     product = product*a[i];
    }
    printf("the product is : %d\n",product);
    return 0;
    

}