#include <stdio.h>


void square(int *input) { // This function is an example of what we can do with pointers
    *input *= *input; // It squares the dereferenced pointer of a variable, effectively changing the variable instead of making a copy of it
}

void sizeExample(int ages[]) { // When passing an array to a function it decays to a pointer
    printf("Pointer size of ages = %lu", sizeof(ages)); // So if we for example use sizeof() on an array in a function it will only print the size of the pointer
}

int main() {
    int a = 100;
    int *b = &a; // The '*' sign is the indirection operator, you use it when you declare a pointer
    // The '&' is the 'address of' operator, you use it to create a pointer
    printf("a   = %d\n", a);
    printf("*b  = %d\n", *b); // You also use '*' sign to get the value at the pointer's destination. This is called dereferencing a pointer.


    a = 200;
    printf("a   = %d\n", a); //The value of a variable and the value of a dereferenced pointer is the same
    printf("*b  = %d\n", *b);

    int c = 6000;
    b = &c; //Now b is the memory address of c
    a = 4000;

    printf("a   = %d\n", a);
    printf("*b  = %d\n", *b); // We can dereference the pointer of b by using the '*' sign
    printf("address of c (The variable b) is: %p", b); // In order to print the address of c we use the "%p"

    int x = 5;
    square(&x); // Since we pass the address of 'x' we can work on it's real value stored in that memory address
    printf("%d\n", x); // We print the changed value using printf

    int ages[] = {2, 43, 63000, 23, 05, 53}; //
    int ages_size = sizeof(ages) / sizeof(ages[0]);

    printf("Memory size of ages = %lu\n", sizeof(ages)); // Using size of outside of a function will give the correct size of an array (in here 24)
    //since there are 6 elements each 4 bytes in size
    sizeExample(ages); // This will only print the size of a pointer (8 bytes) (see comment in the function definition)
    return 0;
}