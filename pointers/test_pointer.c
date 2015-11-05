#include <stdio.h>

int main(){
    int x = 10;
    int * p = &x;
    int * z = &x;
    int * y = p;
    printf("p points to %p\n",p);
    printf("z points to %p\n",z);
    printf("y points to %p\n",y);
    printf("x address is to %p\n",&x);
    *p = 9;
    printf("%d\n",x);
}
