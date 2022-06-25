/*This program is used to count lines from a text stream*/

#include <stdio.h>

int main() {

    int nl, c;

    for(nl = 0; (c = getchar()) != EOF;)
        if(c == '\n')
            ++nl;

    printf("There are totally %d lines of text.", nl);
    return 0;
}
