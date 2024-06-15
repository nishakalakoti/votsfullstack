#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("\n please enter any fact number");
    scanf("%d",&n);
    for (i = 1; i <n ; i++)
    {
        fact=fact*i;
        printf("\nfact number is %d",fact);

    }
    return 0;
}














