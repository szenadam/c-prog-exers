#include <stdio.h>

/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("fahrenheit\tcelsius\n");
    while (celsius <= upper) {
        fahr = celsius * 9/5 + 32;
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        celsius = celsius + step;
    }

    return 0;
}
