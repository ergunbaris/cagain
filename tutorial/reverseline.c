#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getline2(char line[], int maxline);
void reverse(char from[], int len);

/* print longest input line */
main()
{
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getline2(line, MAXLINE)) > 0){
        reverse(line,len);
        printf("reversed:%s\n",line);
    }
    return 0;
}

/* getline:  read a line into s, return length */
int getline2(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


void reverse(char from[], int len)
{
    int revIndex;
    int strIndex;
    for(strIndex=0,revIndex=len-1;revIndex >= len/2 && strIndex <= len/2;revIndex--,strIndex++){
        if(revIndex<=strIndex){
            break;
         }
        char temp = from[strIndex];
        from[strIndex]=from[revIndex];
        from[revIndex]=temp;        
    }
}

