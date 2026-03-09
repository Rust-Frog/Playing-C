//
// Created by chef on 3/9/26.
//

#include <stdio.h>

int main() {

    int lower, upper;

    float fahr, celsius;

    lower = 0;
    upper = 300;
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += 20;
    }
}