#include <stdio.h>

int main() {
    //int x = 5 + 5; '5 + 5' is an expression, '5' is an operand, '+' is an operator

    printf("\nforce precedence with '()'\n");
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3; // You can force precedence with '()' it sometimes helps even when it's not needed to indicate to other programmers what evaluation comes first.

    // Associativity is a term that means when something of the same precedence is evaluated for example:
    // int x = 2 * 3 / 3; 2 * 3 is evaluated first since multiplication and division have the same precedence but associativity in case of those 2 is left-to-right

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("Modulus operator: \n");
    int c = 10 % 3;
    printf("10 %% 3 = %d\n", c);

    printf("Unary minus:\n");
    int a = 5;
    int b = -a;
    printf("b = %d\n", b);
    printf("a = %d\n", a); // 'a' doesn't change!

    printf("post increment:\n");
    a = 5;
    b = 5;
    b = a++;
    printf("b = %d\n", b); // 'b' gets assigned to first
    printf("a = %d\n", a); // then 'a' is incremented

    //Fresh start
    a = 5;
    b = 5;
    b = ++a;
    printf("pre increment:\n");
    printf("b = %d\n", b);
    printf("a = %d\n", a);

    printf("Assignment operators:\n"); // All of the assigment operators change the value of a variable
    a = 5;
    b = 5;

    b += a;
    printf("b += a = %d\n", b); // 5 + 5
    a *= 30;
    printf("a *= 30 = %d\n", a); // 5 * 30
    a %= 140;
    printf("a %%= 140 = %d\n", a); // 150 % 140


}