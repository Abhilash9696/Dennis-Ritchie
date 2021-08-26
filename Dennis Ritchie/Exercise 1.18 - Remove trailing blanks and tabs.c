 /*This program removes the trailing blanks and tab spaces for a paragraph/line given as input. */
#include<stdio.h>
#define MAXLINE 1000

/*Reading input lines*/
int getline(char s[],int lim)
{
  int c, i;

  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
    s[i] = c;
  if( c == '\n')
  {
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  
  return i;
}


int RTBS(char s[])
{
  int i;

  for(i=0; s[i]!='\n'; ++i)
    ;
  --i; 

  for(i >0; ((s[i] == ' ') || (s[i] =='\t'));--i)   
    ;

  if( i >= 0)
  {
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
  }
  return i;
}


int main(void)
{
  int len;
  char line[MAXLINE];
  
  while((len=getline(line,MAXLINE))>0)
    if(RTBS(line) > 0)
      printf("%s",line);//Prints the lines after removing trailing blanks tab spaces.

  return 0;
}


