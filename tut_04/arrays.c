// Xing He, (z5413977), 08/03/24
// Part 1: Arrays Practice

#include <stdio.h>

#define ARRAY_SIZE 5
#define ARRAY_ONE_SIZE 3
#define ARRAY_TWO_SIZE 10
#define LETTERS_SIZE 8

void odd_only() {
    // Create an integer array with at least 5 elements.
    int array[ARRAY_SIZE] = { 1, 2, 3, 4, 5};

    // Create a while loop which loops through every element of the array.
    int i = 0;
    while (i < ARRAY_SIZE) {
        // Write an if statement which adds 1 to each even value. 
        // Do this within the while loop.
        if (array[i] % 2 == 0) {
            array[i]++;
        }
        i++;
    }



    // Write another while loop which goes through the array with a 
    // different iterator (i.e. if you used i last time, use j)
    printf("Odd Only: [");
    int j = 0;
    while (j < 5) {
        // Print out the values in the array.
        printf("%d ", array[j]);
        j++;
    }
    printf("]\n");
}

void copy_array() {
    // Create an array of doubles with 3 elements, each with a non-zero value.
    double array_one[ARRAY_ONE_SIZE] = { 1.12, 2.23, 3.34 };

    // Create another array of doubles with 10 elements 
    // where every element initialised to 0.0.
    double array_two[ARRAY_TWO_SIZE] = { 0.0 };

    // Create a while loop that loops through every element of the first array.
    int i = 0;
    while (i < ARRAY_ONE_SIZE) {
        // Copy the elements of the first array into the 
        // second array (leave 0's at the end)
        array_two[i] = array_one[i];
        i++;
    }

    // Create a while loop that prints out all the elements of the second array.
    printf("Copy Array: [");
    int j = 0;
    while (j < ARRAY_TWO_SIZE) {
        printf("%lf ", array_two[j]);
        j++;
    }
    printf("]\n");
}

void largest_character() {
    // Create a character array with exactly 8 elements.
    char letters[LETTERS_SIZE] = { 'l', 'e', 't', 't', 'e', 'r', 's', '.' };

    // Create a character variable called largest_character, 
    // equal to the first character of the array.
    char largest_character = letters[0];
    
    // Create a while loop to loop through the character array.
    int i = 0;
    while (i < LETTERS_SIZE) {
        // Create an if statement to check if the current character 
        // has a higher ascii value than "largest_character"
        if (letters[i] > largest_character) {
            largest_character = letters[i];
        }

        i++;
    }

    // Print out the largest character you've found.
    printf("Largest Character: ");
    printf("%c\n", largest_character);
}


int main(void) {
    odd_only();
    copy_array();
    largest_character();

    return 0;
}