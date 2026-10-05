#include <stdio.h>

// Recursion is a way of solving a problem where our solution depends on
// solutions to smaller instances of the same problem
//
// Practically this means we will write functions that call themselves!
//
// Example: factorial problem
//
// The factorial of n denoted by n! is the product of all positive integers <= n
//
// n! = n * (n-1) * (n-2) ... * 1
//
// 5! = 5 * 4 * 3 * 2 * 1 = 120
//

int factorial(int number);

int main(void) {
    // Non recursive method
    int number = 0;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number >= 1) { // We define a loop that runs until number is bigger or equal to 1
        fact = number * fact; // For each loop execution we assign number * factorial to the factorial
        number--; // Then we decrement the number by one
        // The effect of this loop for number equal 5 is first: factorial = 5 * 1 = 5 then we decrement number by 1 so we get factorial = 4 * 5 = 20 and so on until number hits 1, the result is 120
    }

    printf("Factorial with a while loop: %d\n", fact);
    printf("Factorial of 5 with a recursive function: %d\n", factorial(5));


    return 0;
}

// Recursive method of counting the factorial
// WARNING: using recursion sometimes can have performance issues since calling the function is resource intensive
int factorial(int number) { // 1. First we define the function that takes in a number as a parameter
    if (number == 1) return 1; // 3. If the number is equal to 1 we stop counting the factorial since it would give first 0, -1, -2 and so on. We don't want that
    return number * factorial(number - 1); // 2. Then we multiply the number by factorial number - 1 so that in result we get:
}
// factorial(5)
// 5 * factorial(4)
// 5 * 4 * factorial(3)
// 5 * 4 * 3 * factorial(2)
// 5 * 4 * 3 * 2 * 1