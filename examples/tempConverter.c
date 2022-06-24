/*This program will print out a table of a list of Fahrenheit temperatures with its corresponding Celsius temperatures.*/

#include <stdio.h>

int main() {

    //initialize the lower and higher limit value of the Fahrenheit temperature in the table
    int low = 0;
    int high = 300;
    int step = 20; //step increment value each loop

    float f = low;  //initialize the Fahrenheit temperature
    float c;        //initialize the Celsius temperature

    while(f <= 300) {

        c = (f - 32.0) * (5.0 / 9.0);       //calculate the corresponding Celsius temperature using the formula
        printf("%3.0f\t%6.1f\n", f, c);     //print out the table

        f += step;          //increase the Fahrenheit temperate by 20 degrees
    }


    return 0;
}
