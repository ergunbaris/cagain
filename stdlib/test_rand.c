#include <stdio.h>
#include <stdlib.h>

int main(){
    time_t t;
    srand((unsigned) time(&t));
    int n;
    for(n=0;n<10;n++){
        printf("%d\n",rand()%100);
    }
}
