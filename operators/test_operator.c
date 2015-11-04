#include <stdio.h>

int main(){
    int n = 0xF0;
    printf("0x70 == n&0x7F result must be 1 and it is= %d\n",0x70 == (n&0x7F));
    printf("0xC0 == n&~0x7F result must be 1 and it is= %d\n",0x80 == (n&~0x7F));
    printf("0xFF == (0xC0|0x7F) result must be 1 and it is= %d\n",0xFF == (0xC0|0x7F));
}
