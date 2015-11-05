#include <stdio.h>
#include <math.h>

int setbits(int number, short position, short numberOfBits);

int main(){
    int sample = 0x000FF00;
    printf("sample=%d\n",sample);
    int result = setbits(sample,0,4);
    printf("result=%d\n",result);
    printf("result == 0x000FF0F should be 1 and result=%d\n", result == 0x000FF0F);
    result = setbits(sample,4,4);
    printf("result=%d\n",result);
    printf("result == 0x000FFF0 should be 1 and result=%d\n", result == 0x000FFF0);
    result = setbits(sample,16,4);
    printf("result=%d\n",result);
    printf("result == 0x00FFF00 should be 1 and result=%d\n", result == 0x00FFF00);

}

int setbits(int number, short position, short numberOfBits){
    if(numberOfBits>10 || position >31){
        return -1;
    }
    int n;
    int bitMask =0;
    for(n=0;n<numberOfBits;n++){
        bitMask += pow(2,n);
    }
    bitMask = bitMask << position;
    return number|bitMask;
}
