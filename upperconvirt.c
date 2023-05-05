#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100],upper_str[100];
    int i=0;
    printf("\n enter the string \n");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
            upper_str[i]=str[i]-32;
        else
            upper_str[i]=str[i];
        i++;
    }
    upper_str[i]='\0';
    printf("\n string converted 2 upper case is : ");
    puts(upper_str);
    return 0;

}
