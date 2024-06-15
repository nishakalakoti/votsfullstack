#include<stdio.h>
int main()
{
    int r;
    printf("enter any table number");
    scanf("%d",&r);
    for (int i = 1; i <= 10; i++)
    {
        int c=r*i;
        printf("\n%d*%d=%d",r,i,c);
    }
    return 0;
    
}