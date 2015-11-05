#include <stdio.h>

int main(){
    int x = 10;
    int * p = &x;
    int * z = &x;
    int * y = p;
    *p = 9;
    printf("%d\n",x);
}
