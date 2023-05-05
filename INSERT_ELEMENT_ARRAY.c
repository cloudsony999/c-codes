//create and display an array
#include <stdio.h>
int main()
{
    int i,n,marks[200],pos,num;
    printf("\n enter no of marks in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\n marks[%d] = ",i);
    scanf("%d",&marks[i]);
    }
    printf("\n ENTER THE NEW ELEMENT position \n");
    scanf("%d",&pos);
    printf("\n ENTER THE NEW ELEMENT value \n");
    scanf("%d",&num);

    for(i=n-1;i>pos;i--)
        marks[i+1]=marks[i];
    marks[pos]=num;
    n=n+1;
     printf("\n after insertion of %d is:",num);
     for(i=0;i<n;i++)
    printf("\n marks[%d]= %d",i,marks[i]);
    return 0;
}
