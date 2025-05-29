#include<stdio.h>

void cube(int size)
{
    int *ptr[size][size]; 
   int arr[size][size],i,j;
    printf("Elements of arrays:-");
    printf("\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            ptr[i][j]=&arr[i][j];

        }
    }
printf("Cube of values is:");
printf("\n");
     for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            
            printf("%d ",*ptr[i][j] * *ptr[i][j] * *ptr[i][j]);
        }
        printf("\n");
    } 
    
}

int main()
{
    int size;
printf("Enter your size:");
    scanf("%d",&size);
    cube(size);
    return 0;
}