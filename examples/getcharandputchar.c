/*This program will receive a character one at a time and print out 1 character each time from the text stream*/

#include <stdio.h>

int main() {

    int c;

    c = getchar();      //read a character
    while(c != EOF) {   //while character is not end-of-file indicator
        putchar(c);     //output the character just read
        c = getchar();  //read a character

    }



    return 0;
}
