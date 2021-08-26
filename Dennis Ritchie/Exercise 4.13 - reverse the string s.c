#include<stdio.h>
#include<string.h>
#define MAXLINE 100
int getline(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
        s[i] = c;

    if(c=='\n')
        s[i++]='\n';

    s[i]='\0';
}
void reverse(char s[]);

int main()
{
    char s[MAXLINE];

    getline(s,MAXLINE);

    reverse(s);

    printf("%s",s);
    
    return 0;
}



void reverse(char s[])
{
    void reverser(char s[],int i,int len);

    reverser(s,0,strlen(s));
}

