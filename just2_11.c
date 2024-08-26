#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d",&a);
     switch(a)
    {
        case 10:
        printf("result%d\n",a/2);
        break;
        case 20:
        printf("result%d\n",a/3);
        break;
        case 30:
        printf("result%d\n",a/4);
        break;
        case 40:
        printf("result%d\n",a/5);
        break;
        default:
        printf("value not match\n");
    }
    return 0;
  


  
}  