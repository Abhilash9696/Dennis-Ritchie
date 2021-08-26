#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

void reverse(char str[]);
// This below function can convert the largest negative integer possible to a string 
void modified_itoa(int n,char s[])
{
    int i,sign;
    sign=n;
    i = 0;
    do
    {
        if(n%10 > 0)
        {
            s[i++] = n%10;
        }
        else
        {
            s[i++] = -(n%10) + '0';
        }
    }
    while((n/=10)!=0);
    if( sign < 0)
    {
        s[i++]='-';
    }
    s[i]='\0';
    reverse(s);
}
void reverse(char s[])
{
    int c,i,j;

    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

int main()
{
    int largest_neg_int;
    char str[MAXLINE];
    largest_neg_int = -2147483648;
    printf(" converting the Integer:%d to a string and printing it.",largest_neg_int);
    modified_itoa(largest_neg_int,str);
    printf("%s",str); //Printing the given largest negative number as a string.
    return 0;
}

