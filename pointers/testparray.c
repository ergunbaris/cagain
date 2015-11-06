#include <stdio.h>

int main(){
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    int * p = x; // or int * p = &x[0];
    int * q = x + 4; // or int * p = &x[0];
    printf("*p == 1 is:%d *q == 5 is:%d\n",*p==1,*q==5);
    int * r = x + 2*(sizeof(x)/sizeof(int)); // overmove the pointer
    printf("*r:%d\n",*r);
}
