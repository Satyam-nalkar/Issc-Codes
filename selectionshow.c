#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,temp,min;  
    FILE *inputFile=fopen("satyam.txt","r");

    if(fscanf(inputFile,"%d",&n)!=1){}  // n is for size of the file

    int *arr=(int*)malloc(n*sizeof(int)); //create memory for an array of n size
    for(i=0;i<n;i++)
    {
      fscanf(inputFile,"%d",&arr[i]);  
    }
       for(i=0;i<n-1;i++)
      {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }    
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
      }

     printf("sorted array\n");
     for(i=0;i<n;i++)
        {
          printf("%d\n",arr[i]);
        }
        fclose(inputFile);
    return 0;
}