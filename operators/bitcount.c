#include <stdio.h>

short bitcount(unsigned number);
int main(){
    printf("%u bitcount should return 4 and it is =%d\n",0x0F,bitcount(0x0F));
    printf("%u bitcount should return 8 and it is =%d\n",0xFF,bitcount(0xFF));
    printf("%u bitcount should return 7 and it is =%d\n",0x7F,bitcount(0x7F));
    printf("%u bitcount should return 8 and it is =%d\n",0xFF000000,bitcount(0xFF000000));
}
short bitcount(unsigned number){
    short count =0;
    for(;number!=0;number>>=1){
        if(number&1){
            count++;
        }
    }
    return count;
}
