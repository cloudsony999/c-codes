//create and display an array
#include <stdio.h>
int main()
{
    int i,n,marks[200];
    printf("\n enter no of marks in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\n marks[%d] = ",i);
    scanf("%d",&marks[i]);
    }
    printf("\n print the marks\n");
    for(i=0;i<n;i++)
    {
    printf("\n %d",marks[i]);
    }
    return 0;
}
