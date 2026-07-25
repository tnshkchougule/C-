#include<stdio.h>
int main()
{
    int no;
    printf("Enter NO:");
    scanf("%d",&no);

    if(no%5==0)
       printf("\nDivisible by 5");
    else
       printf("\nNot Divisible by 5");
    return 0;
}