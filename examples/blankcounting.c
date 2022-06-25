/*This program will count the number of blank from the input*/

#include <stdio.h>

int main() {

    int c, count = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ')        //if c equals to a blank, increase the counter by 1
            ++count;
    }

    printf("%d\n", count);

    return 0;
}
