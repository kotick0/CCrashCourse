#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> // A library required for memory functions
#include <string.h>

typedef struct {
    char name[30];
    int age;
    bool is_verified;
} user_t;

user_t *create_user(char name[], int age, bool is_verified) { //Example of using malloc to create an object
    user_t *new_user = malloc(sizeof(user_t));
    strcpy(new_user->name, name);
    new_user->age = age;
    new_user->is_verified = is_verified;
    return new_user;
};


// A lot of concepts regarding memory management in C are closely tied to variable scope. It is highly recommended to grasp these concepts first.
// Variables often have lifetime related to the curly braces they are placed in. BUT... see below
void fun() {
    int static x = 0; // If you define a variable with the static keyword the lifetime of the variable changes.
    x++; // What it means is that it can for example save the state of the variable outside of the function
    printf("This is the behaviour of a static variable: %d\n", x); // WARNING: although the lifetime of the variable is extended to the lifetime of the program it ISN'T accessible from outside of this function.
}

// There are three types of managing memory: 1. Automatically 2. Statically 3. Dynamically

int main() {
    //x++ // We still can't do that with a static variable
    for (int i = 0; i < 3; i++) {
        fun();
    }

    // Example of a dynamic array
    int size;
    printf("Please input the array size here (int): ");
    scanf("%d", &size); //We first ask the user for the array size

    int *array = malloc(size * sizeof(int)); // Then we allocate memory to it by using malloc. Remember to always multiply the number by the bytes of the variable size.

    if (array == 0) { // If there is not enough memory sometimes malloc can return 0. In that case it is a good idea to handle that exception.
        printf("Invalid pointer. Error allocating memory!\n");
        return -1;
    }
    printf("You are good to go!\n");

    for (int i = 0; i < size; i++) {
        printf("Please input the array[%d] int value: ", i);
        scanf("%d", &array[i]); // We ask the user to input the values in the array
    }
    for (int i = 0; i < size; i++) {
        printf("array[%d] = %d\n", i, array[i]); // Then print all of the values
    }

    free(array); // WARNING: Remember to free the memory after usage. Not complying can lead to running out of memory and memory leaks
    user_t *me = create_user("Piotr Krystowski", 21, false);
    printf("%s is %d years old", me->name, me->age);
    free(me);

    return 0;
}