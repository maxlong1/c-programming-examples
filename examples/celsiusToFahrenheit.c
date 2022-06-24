/*This program will print out a table of Celsius temperature and the Fahrenheit temperature of its equivalent.*/

#include <stdio.h>

int main() {


    int low = 0;
    int high = 100;
    int step = 6;

    //initialize the Fahrenheit and Celsius temperatures
    float c = low;
    float f;


    while(c <= high) {

        f = c * (9.0 / 5.0) + 32.0;     // transform formula

        printf("%3.0f\t%6.2f\n", c, f); //print out the table

        c += step;  //change the test term
    }






    return 0;
}
