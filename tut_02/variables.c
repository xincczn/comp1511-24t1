// Xing He, (z5413977), 23/02/24
// Part 1: Variables

#include <stdio.h>

int main(void) {

    /*
       There are three main data types we can use in C.

       type (Name) -> value
       int (Integer) -> 10
       double (Double) -> 3.14
       char (Character) -> 'a'

        Variables hold data of the above types.
       There are three steps to variables in C.
    */

    
    /*
        Step 1: Declaration

        We create variables so that way we can perform
        complex calculations.
        
        First we need to declare them with a name of our
        choice, alongside the type that the variable can hold.

        <type> <variable_name>;    (replace anything in <>)
    */

    int number;
    double pi;
    char letter;

    // Do not uncomment these yet.
    // printf("number = %d\n", number);
    // printf("pi = %lf\n", pi);
    // printf("letter = %c\n", letter);

    /*
        Step 2: Initialisation

        Variables can't be used unless it holds a value.
        If you uncomment any of the above three lines,
        the program will fail to compile as a result.

        Initialising variables is an important step, as
        it gives them a value.

        <variable_name> = <value>;
    */

   number = 8;
   pi = 3.14;
   letter = 'a';

    printf("number = %d\n", number);
    printf("pi = %lf\n", pi);
    printf("letter = %c\n", letter);
    printf("\n");

    /*
        Step 3: Re-assignment

        Variables become really powerful once we start
        reassigning their value.
        Check out some of the way we can reassign variables.

        <variable_name> = <new_value>;
    */

    number = 10;
    pi = pi + pi;
    letter = 'b';

    printf("number = %d\n", number);
    printf("pi = %lf\n", pi);
    printf("letter = %c\n", letter);

    /*
        Bonus Step: Declaring and Initialising at the same time.

        If we know the values we want to give beforehand, we
        can declare a variable with that value in one line.
   
        <type> <variable_name> = <value>;
    */

    int life = 42;

    printf("The meaning of life: %d!\n", life);

    return 0;
}


