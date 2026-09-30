#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int x = 50;
    int y; //declaration
    y = 10; //initialization

    printf("%s World\n", "Hello");

    printf("The value of x is: %d\n", x);
    printf("X: %d, Y: %d\n", x, y);

    int radius;
    printf("Give me a radius: ");
    scanf("%d", &radius); // "&" address-of-operator (pointer)
    printf("You chose the value %d\n", radius);

    char name[20]; //char array of 20 characters. '\0' - (null terminator) takes last spot in the array
                                                    //Overwriting it will cause memory leaks
    printf("Please input a name: ");
    scanf("%19s", name);
    printf("You inputted the name: %s", name);
    return 0;
}
