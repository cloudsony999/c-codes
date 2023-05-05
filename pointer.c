#include <stdio.h>
int main()
{
    //system defined function
    printf("\n Hi tryani how are u?\n");
   int num,*pnum;
   pnum=&num;
   printf("\n enter no....\n");
    scanf("%d",&num);
    printf("\n user given value is : %d",*pnum);
    printf("\n user given value is : %d",num);
    printf("\n user given value address is  : %d",pnum);
    printf("\n user given value address is  : %d",&num);

    int *u=NULL;

    void *v;//generic pointer
    int y=10;
    char ch='A';
    v=&y;
    printf("\n generic pointer points to : %d",*(int*)v);
    v=&ch;
    printf("\n generic pointer points to : %c",*(char*)v);

    
    return 0;
}
