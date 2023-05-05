#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100],i=0,length;

    printf("\n enter the string \n");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0')
        i++;
    length=i;
    printf("\n the length is : %d",length);
    return 0;

}
