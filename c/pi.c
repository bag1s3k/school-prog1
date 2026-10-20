#include <stdio.h>

int main(void) {
    int index;
    printf("Enter index: ");
    if (scanf("%d", &index) != 1) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    double sum = 0.0;
    for (int i = 0; i < index; i++) {
        double tmp = (i % 2 == 0) ? 1.0 : -1.0;

        sum += (1.0 / (2 * i + 1)) * tmp;
    }

    printf("Result: %.10f\n", sum * 4);

    return 0;
}
