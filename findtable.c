#include<stdio.h>
int main()
{
    int s;
    printf("enter any table number");
    scanf("%d",&s);
    for (int i = 1; i <=10; i++)
    {
        int y=s*i;
        printf("\n%d*%d=%d",s,i,y);
        printf("\n");
        
    }
    return 0;
}