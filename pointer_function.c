#include <stdio.h>
void sum(int *a,int *b,int *c)
{
    *c=*a+*b;
    
}
int main()
{
    int num1,num2,total;
printf("\n enter 1st no :");
scanf("%d",&num1);
printf("\n enter 2nd no :");
scanf("%d",&num2);
sum(&num1,&num2,&total);
printf("\n total = %d",total);
    return 0;
}
