#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter any string:");
    gets(str);
    int length=0,*ptr;
    ptr=&length;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
        printf("The length is: %d",*ptr);
    
    return 0;

}