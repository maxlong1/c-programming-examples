/* This program is going to print a table of Fahrenheit temperatures and their Celsius equivalents*/


#include <stdio.h>

int main() {

    //define the initial Fahrenheit temperature and its limit of the table
    int low = 0;
    int high = 300;

    //define the increment each time of loop
    int step = 20;

    //define the 2 kinds of temperature using int
    int fahrenheit = low;
    int celsius;


    //print out the table head
    printf("Fahrenheit\tCesius\n");


    //print out the table body of 2 kinds of temperatures
    while(fahrenheit <= 300) {
        celsius = (fahrenheit - 32)*5/9;    //transform formula

        //start to print out the table body
        printf("%d\t\t%d", fahrenheit, celsius);
        printf("\n");

        // increase the table body
        fahrenheit += 20;

    }


    return 0;


}
