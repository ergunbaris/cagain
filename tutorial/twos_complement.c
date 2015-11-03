#include <stdio.h>

int main(){
    printf("0xFFFFFFFF must be -1 which is %d\n",0xFFFFFFFF);
    printf("0xFFFFFFFE must be -2 which is %d\n",0xFFFFFFFE);
    printf("0xFFFFFFFD must be -3 which is %d\n",0xFFFFFFFD);
    // and so on
}
