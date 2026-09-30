#include <stdio.h>

int main() {
    //ALL loops consist of three things: initialization, comparison, update
    printf("--------------First for loop-------------\n");
    for (int i = 0; i < 10; i++) { // int i = 0 - initialization, i < 10 - comparison, i++ - update
        printf("%d\n", i);
    }
    printf("--------------Second for loop-------------\n");
    int i; // In some versions of C you need to declare the variable first, then use it in a for loop
    for (i = 6; i > 4; i--) { // You can do many different things with a simple for loop!
        printf("%d\n", i);
    }
    printf("-------------For loop using array size--------------\n");
    int ages[] = {12, 43, 545, 3, 4, 54, 6, 7 ,87, 12};
    int size = sizeof(ages) / sizeof(ages[0]); // In C there is no native method for checking the size of an array, there is only a sizeof() method that gives you the size of a variable in bytes.
    // So if you use it on an array you need to divide the total number of bytes by the size of one of the elements in the array to get the total number of elements
    // THIS WILL NOT WORK IF YOU MAKE A METHOD OUT OF IT SINCE THE YOU WOULD BE CALCULATING THE SIZE OF A POINTER INSTEAD
    for (int i = 0; i < size; i++) {
        printf("ages[%d] = %d\n", i, ages[i]);
    }
    printf("--------------Nested for loop-------------\n");
    for (int i = 0; i < 10; i++) {
        for (int j = i; j >= 0; j--) { // The inner loop will execute every time the outer loop is run then it takes in i as an argument and decreases each time.
            printf("%d ", j);
        }
        printf("\n"); // After every inner loop execution a new line is made
    }
    printf("--------------While loop-------------\n");
    i = 0;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    printf("--------------do while loop-------------\n");
    int input;
    do { // First the 'do' body is run
        printf("Please input a number between 0 and 9: ");
        scanf("%d", &input);
    } while (input < 0 || input > 9); // Then the evaluation after 'while' is run. If it evaluates to true it is run again, if it evaluates to false the loop breaks
    return 0;
}