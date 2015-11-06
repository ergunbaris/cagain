#include <stdio.h>

void swap(int x, int y);
void swap2(int* x,int* y);

int main(){
    int x = 1;
    int y = 11;
    printf("before swap x:%d y:%d\n",x,y);
    swap(x,y);
    printf("after swap x:%d y:%d\n",x,y);
    printf("before ptr swap x:%d y:%d\n",x,y);
    swap2(&x,&y);
    printf("after ptr swap x:%d y:%d\n",x,y);
}

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;    
}

void swap2(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
