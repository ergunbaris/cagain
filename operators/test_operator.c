#include <stdio.h>

int main(){
    printf("0x70 == 0xF0&0x7F result must be 1 and it is= %d\n",0x70 == (0xF0&0x7F));
    printf("0xC0 == 0xF0&~0x7F result must be 1 and it is= %d\n",0x80 == (0xF0&~0x7F));
    printf("0xFF == (0xC0|0x7F) result must be 1 and it is= %d\n",0xFF == (0xC0|0x7F));
    printf("0xC0 >> 1 result must be 0x60 and it is= %d\n",0xC0>>1);
}
