#include<stdio.h>

int lcase(int c);

int main(void)
{
    int c;
    
    while((c=getchar())!=EOF)
    {
        putchar(lcase(c));
    }
}

int lower(int c)
{
    return c>='A' && c<='Z'? c+'a'-'A':c;
}
