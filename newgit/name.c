#include<stdio.h>
int main()
{
 char array[1][10];
 printf("enter name\n");
 for ( int i = 0; i < 1; i++)
 {
    scanf("\n%s",&array[i]);
 }
 for (int i = 0; i <1; i++)
 {
    printf("\n%s",array[i]);
 }

 return 0;
 
}
