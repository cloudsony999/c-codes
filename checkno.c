#include <stdio.h>
int check(int);//prototype
//body
int check(int a)
{
    //int a=11;
    if (a%2 ==0)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    //system defined function
    printf("\n enter no....\n");
    scanf("%d",&num);
    int status=check(num);
    if(status==1)
        printf("\n no is even\n");
    else
        printf("\n no is odd\n");
    return 0;
}
