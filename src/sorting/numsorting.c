#include<stdio.h>
int main()
{
    int number[8]={50,33,40,90.20,100,55,109};
    int ascending=0;
    printf("total number\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d",number[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j <8; j++)
        {
            if(number[i]>number[j])
            {
                ascending=number[i];
                number[i]=number[j];
                number[j]=ascending;
            }
        }
        
    }
    printf("ascending oder\n");
    for (int i = 0; i < 8; i++)
    {
        printf("\n%d",number[i]);
    }
    
return 0;
}