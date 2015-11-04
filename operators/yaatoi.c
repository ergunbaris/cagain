#include <stdio.h>
#include <math.h>

int yaatoi(const char value[], int size, short base);
int getArrayLength(const char value[]);
int convertCharToDecimal(char value);

int main(){
    char hexSample[] = "7F";
    char binSample[] = "01111111";
    int hexVal = yaatoi(hexSample,sizeof(hexSample)/sizeof(char)-1,16);
    int binVal = yaatoi(binSample,sizeof(binSample)/sizeof(char)-1,2);
    printf("%d %d\n",hexVal,binVal);
    if(binVal == -1 || hexVal == -1){
        printf("Operation failed check  input\n");
        return 11;
    }
    printf("%s == %s must be 1 and it is = %d\n", hexSample, binSample, hexVal == binVal);
    return 0;
    
}

// TODO because C is pass by value the argument value will be copy of passed argument
// and its size would be multiples of 8 so better change this function to support
// char * when review pointers and and try to get rid of size argument
int yaatoi(const char value[], int size, short base){
    int sizeCur = sizeof(value)/sizeof(char);
    if(base < 2 || (base > 2 && base < 8)
        || base == 9 || (base >10 && base <16)
        || base >16){
        return -1;
    }
    int retVal = 0;
    int index;
    for(index = size-1; index >= 0; index--){
        char current = value[index];
        int curVal = convertCharToDecimal(current);
        if(curVal == -1){
            return -1;
        }
        double power = pow(base,(size-index+-1));
        retVal += curVal*power;
    }
    return retVal;
}

int getArrayLength(const char value[]){
    return sizeof(value)/sizeof(char);
}

int convertCharToDecimal(char value){
    if(value >= '0' && value <= '9'){
        return value - '0';
    }else if(value >= 'a' && value <= 'f'){
        return value - 'a' + 10;
    }
    else if(value >= 'A' && value <= 'F'){
        return value - 'A' + 10;
    }
    else{
        // not a hex char
        return -1;     
    }
}
