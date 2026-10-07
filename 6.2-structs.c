#include <stdio.h>

typedef struct { // ALWAYS define structs like this with the typedef keyword. You can also define structs in a different way but this one is highly recommended.
    int length;
    int width;
} rectangle_t;

typedef struct {
    int x;
    int y;
} position_t;

typedef struct building_plan_t {
    char owner[30];
    rectangle_t rectangle; // You can nest structs like this. Just put them like normal variables in the struct definition
    position_t position;
} building_plan_t;

int main() {
    rectangle_t my_rectangle = {.length = 5, .width = 10}; // This is how you use a struct in your code. The variables in structs are always defined with a '.' as a prefix.
    //It is HIGHLY recommended to assign the variables you are referring to by name!!!
    printf("Length: %d. Width: %d\n", my_rectangle.length, my_rectangle.width);

    // This is a usage of a struct with multiple structs nested
    building_plan_t my_house = {.owner = "Piotr Krystowski", .rectangle = {.length = 5, .width = 10}, .position = {.x = 32, .y = 48}};
    printf("The house at x = %d, y = %d (size: length = %d, width = %d) is owned by %s\n",
        my_house.position.x,
        my_house.position.y,
        my_house.rectangle.length,
        my_house.rectangle.width,
        my_house.owner
    );

    position_t path[] = {{.x = 0, .y = 1}, {.x = 1, .y = 2},{.x = 3, .y = 4}}; // You can also make an array of structs just like this
    int path_size = sizeof(path) / sizeof(path[0]); // We count the size of the array like we count any other
    for (int i = 0; i < path_size; i++) {
        printf("The position on index %d is: x = %d, y = %d\n", i, path[i].x, path[i].y);
    }

    building_plan_t *structPointer = &my_house; // We make a pointer just like with any other variable
    printf("Position x: %d\n", structPointer->position.x); // The only DIFFERENCE is that we reference the value in the struct by an arrow '->' not by a '.'
    return 0;
}
