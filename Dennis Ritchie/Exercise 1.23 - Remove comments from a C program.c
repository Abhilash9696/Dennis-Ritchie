/*This program reads a c code and removes the comments in the code*/
#include<stdio.h>

void echo_quote(int c)
{
    int d;

    putchar(c);
    
    while((d=getchar())!=c)
    {
        putchar(d);
        
        if(d = '\\')
            putchar(getchar());
    }
    putchar(d);
}

void incomment()
{
    int c,d;
     
    c = getchar();
    d = getchar();

    while(c!='*' || d !='/')
    {
        c =d;
        d = getchar();
    }
}

void rcomment(int c)
{
    int d;
    if( c == '/')
    {
        if((d=getchar())=='*')
         incomment();
        else if( d == '/')
        {
            putchar(c);
            rcomment(d);
        }
        else 
        {
            putchar(c);
            putchar(d);
        }
    }
    else if( c == '\''|| c == '"')
        echo_quote(c);
    else
        putchar(c);
}


int main(void)
{
    int c,d;

    printf(" To Check /* Quoted String */ \n");

    while((c=getchar())!=EOF)
        rcomment(c);

    return 0;
}




