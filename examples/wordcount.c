/*This program will count words, lines, and characters.*/
/* a word -- any sequence of characters that does not contain a blank, tab or newline*/

#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */


int main() {

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;


    while((c = getchar()) != EOF) {
        ++nc;       //count the characters
        if (c == '\n')
            ++nl;           //count the lines
        if((c == ' ') || (c == '\n') || (c == '\t')) {          //count the words
            state = OUT;        //using a state flag to determine whether a new word is met and to be counted in
        } else {
            if (state == OUT) {
            state = IN;
            ++nw;
            }
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
