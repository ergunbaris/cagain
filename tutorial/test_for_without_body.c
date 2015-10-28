#include <stdio.h>
/* Terminate with Ctrl+D for EOF */
int main(){
    double nc;
    for(nc=0;getchar() != EOF;++nc);
    printf("%.0f\n",nc);
}
