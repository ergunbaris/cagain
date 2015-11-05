#include <stdio.h>
#define max(A,B) ((A)>(B)?(A):(B))
#define max2(A,B) (A>B?A:B)
#define square(x) x*x
#define square2(x) ((x)*(x))
#define dprint(expr) printf(#expr " = %g\n",expr)
#define paste(front, back)  front ## back
#define swap(t,x,y) { t _z; _z = x;x = y;y = _z; }

int main(){
    int n = 10;
    int m = 11;
    int z = 9;
    int w = 22;
    printf("max(%d,%d)=%d\n",n+m,z+w,max(n+m,z+w));
    printf("max2(%d,%d)=%d\n",n+m,z+w,max2(n+m,z+w));
    printf("square(%d+1)=%d\n",z,square(z+1));
    printf("square2(%d+1)=%d\n",z,square2(z+1));
    dprint((double)z/n);
    printf("%d\n", paste(13,12));

    char t = '3';
    char s = 'a';
    printf("Before swap t=%c and s=%c\n",t,s);
    swap(char,t,s);
    printf("After swap t=%c and s=%c\n",t,s);

    int samp =3;
    int samp2 =89;
    printf("Before swap samp=%d and samp2=%d\n",samp,samp2);
    swap(int,samp,samp2);
    printf("After swap samp=%d and samp2=%d\n",samp,samp2);

}
