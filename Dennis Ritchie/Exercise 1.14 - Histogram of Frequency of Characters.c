
#include<stdio.h>
int main()
{
    int c,i,j;

    int char[100];
    
    for(i=0;i<100;i++)
        char[i] = 0;
    
    while((c=getchar())!=EOF)
        ++char[c];

    for(i=0;i<100;i++)
    {
        putchar(i);
        for(j=0;j<char[i];j++)
        {
            putchar('*');
        }
        
        putchar('\n');
    }
}
