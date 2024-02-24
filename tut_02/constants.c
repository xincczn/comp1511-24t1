// Xing He, (z5413977), 23/02/24
// Part 2: Constants

#include <stdio.h>

#define PI 3.141592

int main(void) {

    /*
        Now with variables under our toolbelt,
        lets do some crazy calculation.

        Lets learn how to calculate the area of a circle.
        
        The formula for the area is as follows:
        Area = pi x radius^2
    */

    int radius;

    // Unlike before, we will be initialising `radius` 
    // with a value from user input

    printf("What is the radius of the circle: ");
    scanf(" %d", &radius);

    printf("Radius: %d\n", radius);

    // Initially we might store the value of `pi` in a variable
    // But since that value is always constant, it is considered
    // a magic value/number.
    // These should be defined as constants.

    // Look above the main function to see how we
    // define constants

    // double pi = 3.141592;

    double area = PI * radius * radius;

    printf("Area: %.2lf\n", area);

    return 0;
}