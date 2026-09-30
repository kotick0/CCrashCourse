#include <stdbool.h>
#include <stdio.h>

int main() {
    int a = 10;

    double b = 10.5; // 64 bit
    float c = 10.5; // 32 bit

    char d = 'a'; //1 byte
    char e[] = "char array"; // 11 because there are 10 chars + null-terminator '\0'

    bool f = false; // 1 byte

    printf("The size of a double: %lu\n", sizeof(b)); // 8 bytes = 64 bits because 1 byte = 8 bits so 8*8 = 64
    printf("The size of a float: %lu\n", sizeof(c)); // 4 bytes = 32 bits because 1 byte = 8 bits so 4*8 = 32
    // Double is more precise than float and can take bigger numbers but takes more space in memory (own note)

    printf("The size of char: %lu\n", sizeof(d));
    printf("The size of e[] char array: %lu\n", sizeof(e));
    printf("The size of bool: %lu\n", sizeof(f));

    int cats;
    int Cats;
    int caTs; // C is case sensitive so those are different variables

    // int zero = .9999999;
    // printf("zero is %d\n", zero);

    int slices = 17;
    int people = 2;

    double slices_per_person = slices / people; // expected: 8.5 real: 8.00000 (SAME AS IN JAVA) because when 2 integers are divided the result will not have double precision. You need to cast double to one of the variables
    double slices_per_person_real = (double) slices / people; //CAST double to count real value
                                                                //CASTING only works on one value as in (double) slices / people - the TYPE CASTING only works on slices here!
                                                                //If you were to do (double) (slices / people) it wouldn't work since the parenthesis are evaluated first and it would give 8.00000
    printf("Slices per person without type casting: %lf\n", slices_per_person);
    printf("Slices per person with type casting: %lf\n", slices_per_person_real);

    double test1 = 25 / 2 * 2;
    double test2 = 25 / 2 * 2.0; //Both test1 and test2 those will give 24.0 since it first evaluates 25 / 2 and then multiplying by 2 or 2.0 doesn't make a difference.

    double test3 = 25.0 / 2 * 2; // test3 will give 25.0. The way to fix the problem above is to make one of the numbers involved in the equation to use double.

    printf("test1: %f\n", test1);
    printf("test2: %f\n", test2);
    printf("test3: %f\n", test3);
    return 0;
}
