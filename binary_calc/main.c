//
// Created by chef on 3/6/26.
//

#include <stdio.h>
int main () {
    int input;
    int bits[32];
    int i = 0;
    printf("Binary converter. \n");
    printf("Please enter an integer: ");
    fflush(stdout);
    scanf("%d", &input);

    while (input != 0) {
        bits[i] = input % 2; //Store if the output is one or zero
        input = input / 2; // divide the numbers into half but discard the floating number.
        i++; //increament the i which will be used by as an index.
    }

    for (int j = i - 1; j >= 0; j--) { // print the output backwards
        printf("%d", bits[j]);
    }
    printf("\n");
}