/*This program will use a for loop to print out a temperature table reversely*/

#include <stdio.h>


int main() {

    for(int c = 100; c >= 0; c -= 6) {

    printf("%3d\t%6.2f\n", c, c * 9.0 / 5.0 + 32);

    }

    return 0;
}
