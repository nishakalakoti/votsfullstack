#include<stdio.h>
int main()
{
    int r;
    printf("enter any table number");
    scanf("%d",&r);
    for (int i = 1; i <= 10; i++)
    {
        int s=r*i;
        printf("%d*%d=%d",r,i,s);
        printf("\n");
    }
    return 0;
    
}