#include<stdio.h>
#define MAXLINE 100
//The below function reads a string.
int getline(char s[],int limit)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    {
        s[i]=c;
    }

    if(c=='\n')
    {
        s[i++]=c;
    }

    s[i]='\0';
}
// Function checks if there is a hyphen and if the characters on the left and right of the hyphen are in ascending order.
//Then it expands that short hand notation and stores it in string s2. eg:a-d is in s1. Then abcd is stored in s2.
void expand(char s1[],char s2[])
{
    int i,j,c;
    i=0;
    j=0;
    while((c=s1[i++]) != '\0')
    {
        if(s1[i]=='-' && s1[i+1] >=c)
        {
            i++;
            while(c<s1[i])
            s2[j++]=c++;
        }
        else
            s2[j++]=c;
    }

    s2[j]='\0';
}

int main()
{
    char s1[MAXLINE],s2[MAXLINE];
    //reading the input string(line) s1
    getline(s1,MAXLINE);
    expand(s1,s2);
    printf("%s",s2);
    return 0;
}

