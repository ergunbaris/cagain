#include <stdio.h>

int main(){
    int x = 10;
    int * p = &x;
    int * z = &x;
    int * y = p;
    printf("p points to value stored at address%p\n",p);
    printf("z points to value stored at address%p\n",z);
    printf("y points to value stored at address%p\n",y);
    printf("x values address is %p\n",&x);
    *p = 9;
    printf("%d\n",x);
    
    printf("p pointer is hold in the address:  %p\n",&p);
    printf("z pointer is hold in the address:  %p\n",&z);
    printf("y pointer is hold in the address:  %p\n",&y);
}
