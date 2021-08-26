#include<stdio.h>
#define MAXLINE 1000

// Function to read a string or in this case we can even read a line and consider blank spaces, numbers for comparision.
int getline(char s[],int lim)
{
    int i,c;
    
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c != '\n';i++)
    {
        s[i] = c;
    }

    if(c == '\n')
    {
        s[i++] = c;
    }
    
    s[i] = '\0';
}

//The below function compares s1 and s2 and if a character in s1 exists in s2, deletes that character from s1 and reorders the characters.
void Comp_and_Del(char s1[],char s2[])
{
    int i,j,k;
    k=0;

    for(i=0;s1[i]!='\0';++i)
    {
        for(j=0; (s1[i]!=s2[j]) && s2[j]!='\0' ;j++)
        {
            ;
        }
        if(s2[j]=='\0')
        {
            s1[k++] = s1[i];
        }
    }
    
    s1[k]='\0';
}


void main(void)
{
    char s1[MAXLINE],s2[MAXLINE];
    
    // Reading two strings.
    printf("Enter the first string");
    getline(s1,MAXLINE);
    printf("Enter the second string");
    getline(s2,MAXLINE);
    Comp_and_Del(s1,s2);

    printf("%s",s1);//Prints the modified string s1 which has no characters similar to s2.

}



