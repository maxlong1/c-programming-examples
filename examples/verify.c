/*verify that the expression getchar() != EOF is 0 or 1*/
#include <stdio.h>


int main() {

    long int c;
    c = getchar() != EOF;

    printf("%d\n", c);

/*print the value of EOF*/
    c = EOF;
    printf("%d\n", c);


    return 0;
}
