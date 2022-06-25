/*This program will replace each tab by \t, each backspace by \b, and each backslash by \\*/

#include <stdio.h>

int main() {

    int c, a1, a2;


    while((c = getchar()) != EOF) {

        if(c == '\t') {
            a1 = '\\';
            a2 = 't';
            putchar(a1);
            putchar(a2);

        }

        if(c == '\b') {
            a1 = '\\';
            a2 = 'b';
            putchar(a1);
            putchar(a2);
        }

        if(c == '\\') {
            a1 = '\\';
            a2 = '\\';
            putchar(a1);
            putchar(a2);
        }

        if((c != '\t') && (c != '\b') && (c != '\\')) {
            putchar(c);
        }




    }

}
