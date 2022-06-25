/*count characters in input; 2nd version*/

#include <stdio.h>

int main() {
    double nc;  //define a counter

    for(nc = 0; (getchar() != EOF); ++nc)   //as long as the file do not reach end, increase the count
        ;
    printf("%.0f\n", nc);   //print out the final count number

    return 0;
}
