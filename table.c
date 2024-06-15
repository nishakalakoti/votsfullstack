#include<stdio.h>
int main()
{
    int l;
    printf("enter any number");
    scanf("%d",&l);
    for (int i = 1; i<=10; i++)
    {
        int g=l*i;
        printf("%d*%d=%d",l,i,g);
    }
    return 0;
    
}