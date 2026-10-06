#include "5.2-libraries.h"

int square(int input) {
    return input * input;
}

int cube (int input) {
    int x = input * input * input;
    return x;
}

int power(int input, int exponent) {
    int total = 1;
    for (int i = 0; i < exponent; i++) {
        total *= input;

    }
    return total;
}

int recursive_power(int input, int exponent) {
    if (exponent < 1) {
        return 1;
    }
    return input * recursive_power(input, exponent-1);
}

void change_value(int *input) {
    *input = 900000;
}

int oldest_value(int ages[], int size) {
    int largest = ages[0];
    for (int i = 0; i < size; i++) {
        if (ages[i] > largest) {
            largest = ages[i];
        }
    }
    return largest;
}
