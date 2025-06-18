#include <stdio.h>
#include "utils.h"

int main() {
    greet("Docker C Developer");

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, subtract(a, b));

    return 0;
}
