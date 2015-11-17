#include<stdio.h>

#define some_macro(a, b, c) a ## b ## c
typedef int     baris;
typedef some_macro(ba , r, is) baris_t; 
int main(){
    baris_t * sample;
    int y = 9;
    sample = &y;
    printf("%d\n",*sample);
    return 0;
}
