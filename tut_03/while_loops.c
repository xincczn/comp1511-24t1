// Xing He, (z5413977), 04/03/24
// Part 1: While Loops

#include <stdio.h>

int main(void) {

    /* 
        There are three crucial components of a loop.

        1. declare and initialise the counter
        while (2. condition) {
            ...

            3. moving the counter to a new value 
            (which eventually invalidates the condition)
        }
    */

    /*
    The loop is executed based the following four steps:
    
    Evaluating the condition: 
        When the program execution reaches the while loop, 
        it first evaluates the condition provided within the parentheses.
    Executing the loop body: 
        If the condition is found true, the code block enclosed 
        within the curly braces is executed.
    Re-evaluation: 
        The condition is re-evaluated, and if it remains true, 
        the loop body is executed again. 
        This process of re-evaluation and execution 
        continues until the condition becomes false.
    Termination: 
        Once the condition becomes false, the loop terminates, 
        and the program execution moves to the next statement after the loop.
    */

   // Below is the translation of the flow chart:

	printf("Start of loop!");


    int counter = 0;
	while (counter < 10) {
		printf("%d\n", counter);
		counter++;
	}

	printf("End of loop!");

    return 0;
}

