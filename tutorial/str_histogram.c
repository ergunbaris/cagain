#include <stdio.h>
/* Terminate with Ctrl+D for EOF */
#define WORD_COUNT 10
int main(){
    int inputLength[WORD_COUNT];
    int i;
    for (i=0;i<WORD_COUNT;i++){
        inputLength[i] = 0;
    }
    int index = 0;
    int charCount =0;
    int maxCharCount =0;
    char input;
    while((input = getchar()) != EOF){
        if(input == ' ' || input == '\t' || input == '\n'){
            inputLength[index++] = charCount;
            if(maxCharCount<charCount){
                maxCharCount=charCount;
            }
            charCount = 0;
            if(index >= WORD_COUNT){
                break;
            }
        }else{
            charCount++;
        }
    }
    
    int wordIndex;
    int starCount;
    int row;
    for (row=maxCharCount; row > 0;row--){
        // max string size could be s
        for (wordIndex=0;wordIndex< WORD_COUNT;wordIndex++){
            // max word count would be w
            // O(w*s)
            if(inputLength[wordIndex]>=row){
                printf("*");
            }else{
                printf(" ");
           }
            
        }
        printf("\n");
    }
        
}
