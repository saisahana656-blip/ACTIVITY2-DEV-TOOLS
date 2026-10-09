
#include <stdio.h>

void greet(const char *name) {
    printf("Welcome, %s! Glad to have you here.\n", name);
}

int main(void) {
    greet("Sahana");
    return 0;
}