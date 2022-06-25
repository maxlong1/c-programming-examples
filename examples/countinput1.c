//This program counts the input characters and print the total number
//But you will need to use ctrl+c to end the program


#include <stdio.h>

int main() {

    long c, count = 0;

    while((c = getchar()) != EOF) {

        ++count;
    }

    printf("There are totally %ld characters.\n", count);

    return 0;
}
