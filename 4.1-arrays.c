#include <stdio.h>

int main() {
    printf("--------------One dimensional arrays-------------\n");

    int ages[] = {1, 4, 60, 43, 54, 3, 90, 21};
    int size_of_ages = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < size_of_ages; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");
    ages[3] = 60;
    for (int i = 0; i < size_of_ages; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");
    printf("--------------Two dimensional arrays-------------\n");

    int rows = 3;
    int const columns = 4; // You always need to define columns with "const" otherwise there will be an error

    int student_grades[][columns] = { // You need to put columns variable in the right pair of square brackets
        {1, 3, 4, 6},
        {3, 2, 4, 5},
        {32, 2, 4, 9}
    };

    // How to print a 2 dimensional array
    for (int i = 0; i < rows; i++) { // First make an outer loop that goes through all of the rows
        for (int j = 0; j < columns; j++) { // Then make an inner loop that goes through all of the columns per every row,
            printf("%d ", student_grades[i][j]); // in this example it will go like this by indexes: (0,1), (0,2), (0,3), (0,4) and then the loop will break since there are no more columns
        }
        printf("\n"); // After each inner loop execution we print a new line
    }
   
    return 0;
}
