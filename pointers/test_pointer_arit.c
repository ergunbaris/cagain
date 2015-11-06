#include <stdio.h>

int main(){
    int x = 10;
    int * p = &x;
    *p++;
    printf("*p++ would increase pointers address and now *p is=%d\n",*p);
    *p--; // take back the pointer
    printf("*p-- return back to corret address and now *p is=%d\n",*p);
    (*p)++;
    printf("(*p)++ now increase value that p points properly =%d\n",*p);
   
}
