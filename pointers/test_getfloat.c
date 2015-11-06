#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

int main(){
    double p;
    int lastC = getfloat(&p);
    printf("%.10f and last following non numeric char ASCII value is:%d\n",p,lastC);

}

/* getint:  get next integer from input into *pn */
int getfloat(double *pn)
{
    int c, sign;

    while (isspace(c = getch()))   /* skip white space */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);    /* it's not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    short floatingPart = 0;
    double dividend = 1.0;
    for (*pn = 0; isdigit(c) | c == '.'; c = getch()){
        if(c == '.'){
            floatingPart = 1;
        }else{
            if(floatingPart){
                dividend *= 10.0F;
             }
            *pn = 10.0F * *pn + (c - '0');
        }
    }
    *pn /= dividend;
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
#define BUFSIZE 100

char buf[BUFSIZE];  /* buffer for ungetch */
int  bufp = 0;      /* next free position in buf */

int getch(void) /* get a (possibly pushed back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
