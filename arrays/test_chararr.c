#include <stdio.h>

void testCharArr(char val[]);
int main(){
    printf("Demonstrates how pass by value changes the input char[]\n");
    printf("the copied value in argument is always 8's multiple size\n");
    char sample[] = "123";
    char sample2[] = "1234567";
    int index;
    for(index =0; index<sizeof(sample)/sizeof(char); index++){
        printf("%d,",sample[index]);
    }
    printf("\n");
    testCharArr(sample);
    int index2;
    for(index2 =0; index2<sizeof(sample2)/sizeof(char); index2++){
        printf("%d,",sample2[index2]);
    }
    printf("\n");
    testCharArr(sample2);
    
    
}

void testCharArr(char val[]){
    printf("copied array on pass by value argument\n");
    int index;
    for(index =0; index<sizeof(val)/sizeof(char); index++){
        printf("%d,",val[index]);
    }
    printf("\n");
}
