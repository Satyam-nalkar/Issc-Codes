#include<stdio.h>
int main()
{
    int count=1;
    int sum =0;
    int n;
    printf("Enter the number");
    scanf("%d",&n);

        while(count<=n)
        {
            sum=sum+count;
            count= count+1;
        }
        
         printf("Sum is %d",sum);
        
    return 0;
    
}