#include <stdio.h>
#include <string.h>

int main() {
    char name[20]; // Always remember to leave one space for the null terminator '\0' that indicates when the string ends
    printf("Please input a name (19 characters): ");
    scanf("%19s", name); // You can limit the amount of characters a user is able to put in by placing a number in between of the '%' and 's'

    int letter = 0; // A way to manually count the letters in a string is to first make a variable with the letter count
    while (name[letter] != '\0') { // Then create a while loop that executes until the null terminator is found
        letter++; // for evey loop execution add one to the letter variable
    }
    printf("Size of name (counted the manual way) is %d\n", letter); // Printing the letters counted the manual way
    printf("Size of name (counted the string.h way) is %lu\n", strlen(name)); // Another way to count the letters in a string is to use a library called string.h which gives you a dedicated strlen() method. Remember to use %lu instead of %d since it returns an unsigned long

    if (strcmp(name, "Piotr") == 0) { //The strcmp() method from string.h library compares 2 strings together and returns 0 if the strings are the same.
        printf("String are the same! You have access!\n");
    }
    //char copy[20] = name WARNING - You can't do that in C. You need to use the strcpy() function from the string.h library. The way of usage coded below.
    char copy[20];
    strcpy(copy, name); // You first pass the variable you will be copying into and then the string you want a copy of
    printf("Copy of name (using strcpy()) is: %s\n", copy);

    char last_name[] = " Krystowski";
    strcat(copy, last_name); // The strcat() method from string.h adds another string to a string that already exists.
    printf("Full name: %s\n", copy);
    return 0;
}