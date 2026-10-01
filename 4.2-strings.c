#include <stdio.h>
#include <string.h>

int main() {
    char name[20]; // Always remember to leave one space for the null terminator '\0' that indicates when the string ends
    printf("Please input a name (19 characters): ");
    scanf("19%s", name); // You can limit the amount of characters a user is able to put in by placing a number before the %s
    
    return 0;
}