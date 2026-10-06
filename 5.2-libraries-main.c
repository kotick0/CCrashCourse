#include <stdio.h>
#include "5.2-libraries.h"
int main() {
    int ages[] = {1, 4, 53, 23, 23, 9, 52};
    int size_of_ages = sizeof(ages) / sizeof(ages[0]);
    printf("The oldest value is: %d\n", oldest_value(ages, size_of_ages));
    return 0;
}
