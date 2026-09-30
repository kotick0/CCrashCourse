#include <stdio.h>
#include <stdbool.h>

int main() {
    // LOGICAL OPERATORS: ! = not operator, && - AND operator (both of the statements must evaluate to true to pass), || - OR operator (one of the statements must evaluate to true to pass) \n
    //
    int age = 17;
    double money = 30000;
    bool isGraduated = true;
    if ((age > 17 && money > 25000) || isGraduated) { // Making statements combining || and && is dangerous because we add a level of ambiguity and now we don't know to which statement the || applies here.
        printf("This is true\n");                   // By default it is evaluated like the parenthesis in our statement but you can force different behaviour by putting the parenthesis elsewhere
    } else {
        printf("This is false\n");
    }

    if (age < 12) {
        printf("age is less then 12\n");
    } else if (age >= 12 && age < 20) {
        printf("age is more or equal to 12 and less then 20\n"); //Presentation of else if statement
    } else {
        printf("Age is non of the above\n");
    }

    if (age < 150) printf("You might be alive\n"); // One line if statement

    int menuChoice = 2;

    switch (menuChoice) { // Presentation of a switch statement
        case 0:
            printf("Case 0\n");
            break; // Always remember to put break; after each case otherwise it will continue to other cases
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("Default case\n");
            break;
    }

    double balance = -5000;
    balance > 0 ? printf("You have money!\n") : printf("You don't have money\n"); //Presentation of ternary operator. The '?' is what happens if the statement is true, the ':' is what happens when it is false

    bool hasMoney;
    hasMoney = balance > 0 ? 1 : 0; //You can put ternary operator as a value of a variable too!
    printf("Has money? (1 is yes, 0 is no): %d\n", hasMoney);

    return 0;
}
