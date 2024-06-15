#include<stdio.h>
int main()
{
    int number;
    printf("please enter the number");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("this is even number%d",number);
    }
    else
    {
       printf("this is odd number%d",number);
       printf("\n");
    }
    return 0;

}