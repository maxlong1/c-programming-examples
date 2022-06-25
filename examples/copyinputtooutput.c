/*This is a simplified version of copying input to output using getchar and putchar */


#include <stdio.h>

int main() {

    int c;

    while((c = getchar()) != EOF) {     //receive the text stream from keyboard and test if it's the end-of-file

        putchar(c); //if not, print the characters one by one on the console screen
    }

    return 0;
}
