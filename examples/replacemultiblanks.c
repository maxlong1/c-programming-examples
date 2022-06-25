/*This program will replace one or more blanks by a single blank*/

#include <stdio.h>

int main() {

    int c, flag = 0;


    while((c = getchar()) != EOF) { //print the characters one by one until end-of-file

        if(c == ' ')            // flag increased by 1 if a blank is met
            ++flag;

        if(c != ' ')        //if a blank is not met, reset the flag value
            flag = 0;

        if(flag < 2) {      // if there are no 2 or more continuous blanks, only print one
            putchar(c);
        }


    }


    return 0;
}
