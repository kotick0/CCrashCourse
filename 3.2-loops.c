#include <stdio.h>

int main() {
    //ALL loops consist of three things: initialization, comparison, update

    for (int i = 0; i < 10; i++) { // int i = 0 - initialization, i < 10 - comparison, i++ - update
        printf("%d\n", i);
    }
    printf("---------------------------\n");
    for (int i = 6; i > 4; i--) { // You can do many different things with a simple for loop!
        printf("%d\n", i);
    }

    return 0;
}