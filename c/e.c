#include <stdio.h>

int main(void) {
    int index;
    printf("Enter index: ");
    if (scanf("%d", &index) != 1) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    double sum = 0.0;
    double factorial = 1.0;
    for (int i = 0; i < index; i++) {
        if (i > 0)
            factorial *= i;
        sum += 1.0 / factorial;
    }

    printf("Result: %.10f\n", sum);

    return 0;
}
