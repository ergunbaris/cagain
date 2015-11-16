#include <stdio.h>

int main(){
    int iVar = 88;
    int iVarOctal = 077;
    int iVarHex = 0xFE;
    char cVar = 'c';
    float fVar = 55.6F;
    double dVar = 44.5;
    printf("iVar=%d, cVar=%c, fVar=%6.1f, dvar=%.1f\n",iVar, cVar, fVar, dVar);
    printf("iVarOctal=%o, iVarHex=0x%x, percent=%%\n",iVarOctal, iVarHex);
    int tab;
    for(tab=0; tab < 100; tab+=4){
        printf("%*s\n",tab,"test tab");
    }
}
