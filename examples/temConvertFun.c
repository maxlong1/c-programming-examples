/*This program will use a function to convert temperature*/

#include <stdio.h>

float convert(int fahrenheit);


int main() {

    int fahrenheit = 0;
    int increment = 5;


    while(fahrenheit <= 100) {


        printf("%d %2.2f\n", fahrenheit, convert(fahrenheit));
        fahrenheit += increment;
    }



    return 0;
}


float convert(int fahrenheit) {

    return (fahrenheit - 32) * 5.0 / 9.0;

}
