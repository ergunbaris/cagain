#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    // try with argv[1] = "0100cafe"
    char * end;
    if(argv[1]){
        printf("%s in base0:%u\n", argv[1],strtoul(argv[1],&end,0));
        printf("cut out suffix:%s\n",end);
        printf("%s base10:%u\n", argv[1],strtoul(argv[1],&end,10));
        printf("cut out suffix:%s\n",end);
        printf("%s base8:%u\n", argv[1],strtoul(argv[1],&end,8));
        printf("cut out suffix:%s\n",end);
        printf("%s base16:%u\n", argv[1],strtoul(argv[1],&end,16));
        printf("cut out suffix:%s\n",end); // watch that even there isnt any
                                           // suffix end is set to empty string
                                           // and not null if null it will mean
                                           // any error like wrong base number etc..
    }
}
