#include<stdio.h>
int main()
{
    int s;
    printf("enter any table number");

    scanf("%d",&s);
    for (int i = 1; i <=10; i++)
    {
        int t=s*i;
        printf("\n%d*%d=%d",s,i,t);
    }
    return 0;

    
}