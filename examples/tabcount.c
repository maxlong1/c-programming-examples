/*This program will count the tabs from the text stream*/

#include <stdio.h>

int main() {

    int c, count = 0;


    while((c = getchar()) != EOF) {

        if(c == '\t')
            ++count;
    }

    printf("%d\n", count);


    return 0;
}
