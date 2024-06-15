#include<stdio.h>
int main()
{
    char array[1][20];
    printf("enter any name");
    for (int i = 0; i < 1; i++)
    {
        scanf("%s",&array[i]);
    }
    for (int i = 0; i < 1; i++)
    {
        printf("%s",array[i]);
    }
    return 0;
    
    
}
