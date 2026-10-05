#include <stdio.h>

int square(int input) { // Simple example of a function
   return input * input;
}

int cube (int input) {
    int x = input * input * input; // Variables inside functions are temporary and inaccessible from outside of the function.
    return x;
}

int power(int input, int exponent) { // power() function takes in an input number and an exponent
    int total = 1;
    for (int i = 0; i < exponent; i++) { // we make a loop that executes times of the exponent
        total *= input; // Each time we multiply the total by input
        // So first we have: 1 * 5, then 5 * 5, 25 * 5, 125 * 5, 625 * 5
        // Because 5 to power of 1 is 5 then 5 to 2 is 25 and so on
    }
    return total;
}

int recursive_power(int input, int exponent) { // We take in an input number and an exponent as a parameter
    if (exponent < 1) { // This is the base case of the recursive method, when it is hit the function returns 1 instead of calling itself again
        return 1;
    }
    return input * recursive_power(input, exponent-1);
}

void change_value(int *input) { // void functions are functions that don't return any value
    *input = 900000; // In order to change the value inside of a function we need to reference the pointer of a variable instead of a variable by putting '*' before the variable
}

int oldest_value(int ages[], int size) { // Example of a function checking the largest number in an array.
    int largest = ages[0];
    for (int i = 0; i < size; i++) {
        if (ages[i] > largest) {
            largest = ages[i];
        }
    }
    return largest;
    // WARNING: YOU CAN'T MAKE A FUNCTION THAT COUNTS THE SIZE OF AN ARRAY SINCE IT WILL RETURN THE POINTER SIZE NOT A REAL VALUE
}

int main() {
    int x = 5;
    int x_squared = square(x);
    printf("%d\n", x_squared);

    int x_to_5 = power(x, 5);
    printf("x to 5 = %d\n", x_to_5);

    int x_to_5_recursive = recursive_power(x, 5);
    printf("x to 5 using recursive function = %d\n", x_to_5_recursive);

    change_value(&x); // When calling the function that changes a value of a variable globally we need to put the pointer as a parameter with '&'
    printf("New value of x: %d\n", x);

    int ages[] = {1, 4, 53, 23, 23, 9, 52};
    int size_of_ages = sizeof(ages) / sizeof(ages[0]);
    printf("The oldest value is: %d\n", oldest_value(ages, size_of_ages)); // We can call it inside of a printf since it returns a value
    return 0;
}
