//
// Created by chef on 3/9/26.
//

#include <stdio.h>

int main() {

    int lower, upper, step;

    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}