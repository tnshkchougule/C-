#include<stdio.h>
int main()
{
    int no;
    printf("\nEnter no:");
    scanf("%d",&no);
    
    if(no%2==0)
       printf("\nEven number");
    else
      printf("\nOdd number");
    return 0;
}
