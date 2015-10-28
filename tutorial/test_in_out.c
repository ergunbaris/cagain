#include <stdio.h>
/* Terminate with Ctrl+D for EOF */
int main(){
    char input;
    char prevInput;
    while((input = getchar()) != EOF){
        char inputTemp = input;
        if(input == '\t' ){
            if(prevInput == '\t'){
                input = '\0';                 
            }else{
                input = ' ';
            }
        }
        prevInput = inputTemp;
        putchar(input);
    }
}
