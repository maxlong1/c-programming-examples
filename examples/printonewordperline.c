/*This program will print the words one word per line from the text stream*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int c, state = OUT;

    while((c = getchar()) != EOF) {

        if(c == ' ' || c == '\t' || c == '\n') {    //If the character is not those which consist of words
            state = OUT;                             //set the flag to OUT to indicate it is not inside a word
        } else {
            if (state == OUT) {         //if just come into the first character of a word
             putchar('\n');     //start a new line
             putchar(c);        //print the character of the word
             state = IN;        //set the flag to indicate it's inside the word
            } else {            // if it's not the 1st character of the word, just print the character without start a new line
             putchar(c);
            }
        }


    }


    return 0;
}
