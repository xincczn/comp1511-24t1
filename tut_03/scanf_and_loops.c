// Xing He, (z5413977), 04/03/24
// Part 3.5: Scanf and Loops

#include <stdio.h>

// Enter a series of integers until you reach a negative number. 
// Then, stop and calculate the sum.
void a(void) {
    int input = 0;
    int sum = 0;
    while (input >= 0) {
        sum += input;
        scanf(" %d", &input);
    }
}

// Enter numbers until the user presses 'q'. 
// Then, display the count of numbers entered.
void b(void) {

}


// Uncomment to run specific loop.
int main(void) {

    // a();
    // b();
    // c();
    // d();

    return 0;
}

