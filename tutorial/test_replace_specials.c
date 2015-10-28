#include <stdio.h>
/* Terminate with Ctrl+D for EOF */
int main(){
    char input;
    char prevInput;
    while((input = getchar()) != EOF){
        switch(input){
            case '\t':
                putchar('\\');
                putchar('t');
            break;
            case '\\':
                putchar('\\');
                putchar('\\');
            break;
            case '\b':
                putchar('\\');
                putchar('b');
            break;
            default:
                putchar(input);
              
        }
    }
}
