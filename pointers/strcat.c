#include <stdio.h>

void strcatbo(char * orig, char * add);
int main(){
    char sample1[] = "baris";
    char sample2[] = " ergun1";
    strcatbo(&sample1[0], &sample2[0]);
    printf("%s\n",sample1);
    return 0;
}

void strcatbo(char * orig, char * add){
    do {*orig++;}
    while(*orig);
    while(*orig++ = *add++);
    *orig='\0';
}
