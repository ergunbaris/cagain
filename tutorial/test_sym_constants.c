#include <stdio.h>

#define LIMIT 128
#define ACHAR 'a'

int main(){
    char aChar = ACHAR;
    int index;
    for (index=0; index<LIMIT; index++){
        printf("ASCII value for %c is %d\n", (char)index, index);
    }
    printf("ASCII value for %c is %d\n", ACHAR, (int)ACHAR);
}
