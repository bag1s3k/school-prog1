#include <stdio.h>

int main(void) {
    printf("Enter basic task: e.g '3 + 5': ");

    float a, b, result;
    char o;
    if (scanf("%f %c %f", &a, &o, &b) != 3) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    if (o == '+')
        result = a + b;
    else if (o == '-')
        result = a - b;
    else if (o == '*')
        result = a * b;
    else if (o == '/') {
        if (b == 0) {
            printf("Dividing by zero!!!\n");
            return 1;
        }
        result = a / b;
    } else {
        printf("Unsupported operator!!!\n");
        return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", a, o, b, result);

    return 0;
}
