#include<stdio.h>
#include<string.h>
#define MAXLIMIT 100

void itoa_fw(char s[],int n,int w)
{
    int i,sign;
    sign = n;

    if( sign < 0)
    {
        n = -n;
    }
    i=0;

    do
    {
        s[i++] = (n %10) + '0';

    }
    while((n/=10)>0);
    if(sign <0)
        s[i++]='-';
    else
        ;
    while(i<w) // Adding spaces after to string to achieve specified field width.
    {
        s[i++]=' ';
    }

    s[i]='\0';

    reverse(s);
}

void reverse(char s[]);

int main()
{
    int integer,width;
    scanf("%d", &width);
    scanf("%d", &integer);
    char str[MAXLIMIT];
    itoa_fw(str,integer,width);
    printf("%s",str);
    return 0;
}


void reverse(char s[])
{
    int i,j,c;

    for(i=0,j=strlen(s)-1;i<j;i++,j--)
        c=s[i],s[i]=s[j],s[j]=c;
}
