/* Rewrite the temperature conversion program of 
 * Section 1.2 to use a function for conversion.
 */

#include <stdio.h>
#include <stdlib.h>

int toCelsius(int fahrenheit);
void printTable(int lower, int upper, int step);

int main() {
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    printTable(lower, upper, step);

    return 0;
}

int toCelsius(int fahrenheit) {
    return 5 * (fahrenheit-32) / 9;
}

void printTable(int lower, int upper, int step) {
    int fahr, celsius;
    fahr = lower;
    while (fahr <= upper) {
        celsius = toCelsius(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
