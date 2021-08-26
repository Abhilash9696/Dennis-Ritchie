#include<stdio.h>
#define MAXLINE 1000

int getline(char s[],int lim)
{
    int c,i;
    
    for(i=0;i<lim-1 && (c=getchar()) !=EOF && c!='\n';++i)
        s[i] = c;
    
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';

    return i;
}
void string_cat(char *s,char *t)
{
    while(*s!='\0')
        s++;
    s--;             
    while((*s=*t)!='\0')
    {   
        s++;
        t++;
    }
}

int main()
{
    int len;
    char s[MAXLINE],t[MAXLINE];

    printf("Enter the first strin");
    getline(s,MAXLINE);
    printf("Enter the second string");
    getline(t,MAXLINE);
    string_cat(s,t);
    printf("%s",s);
    return 0;
}



