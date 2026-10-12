#include <stdio.h>

int main(void) {
    printf("Enter height, weight, man / woman (m / w), senior / young (s / y). "
           "In format: '1.80 80 m y': ");

    float height, weight;
    char gender, age;
    if (scanf("%f %f %c %c", &height, &weight, &gender, &age) != 4) {
        printf("Invalid Input!!!\n");
        return 1;
    }

    float result = weight / (height * height);

    if (gender == 'w')
        result *= 0.95;

    if (age == 's')
        result *= 0.9;

    if (result < 18.5)
        printf("Under weight\n");
    else if (result <= 25)
        printf("Normal\n");
    else if (result <= 30)
        printf("Over weight\n");
    else if (result <= 35)
        printf("Obesity (Class I)\n");
    else if (result <= 40)
        printf("Obesity (Class II)\n");
    else
        printf("Extreme Obesity\n");

    return 0;
}
