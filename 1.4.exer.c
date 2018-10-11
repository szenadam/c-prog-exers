#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("fahrenheit\tcelsius\n", fahr, celsius);
    while (celsius <= upper) {
        fahr = celsius * 9/5 + 32;
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        celsius = celsius + step;
    }

    return 0;
}
