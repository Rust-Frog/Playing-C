//
// Created by chef on 3/6/26.
//

#include <math.h>
#include <stdio.h>

void decimal_to_binary() {
    int input;
    char bits[33];
    int i = 0;
    printf("Binary converter. \n");
    printf("Please enter an integer: ");
    fflush(stdout);
    scanf("%d", &input);

    while (input != 0) {
        bits[i] = (input & 1) + '0'; // AND with 1 to get the LSB
        input >>= 1;                  // right shift to move to the next bit
        i++;
    }
    bits[i] = '\0';

    for (int j = i - 1; j >= 0; j--) { // print the output backwards
        printf("%c", bits[j]);
    }
    printf("\n");
}

void binary_to_decimal() {
    char input[65];
    printf("Binary to decimal converter. \n");
    printf("Please enter a binary number: ");
    fflush(stdout);
    scanf("%64s", input);

    int result = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != '0' && input[i] != '1') {
            printf("Invalid input. \n");
            return;
        }
        result = (result << 1) | (input[i] - '0'); // shift left and OR in the next bit
    }

    printf("%d\n", result);
}
int main () {

    while (1) {
        printf("1. Decimal to Binary\n2. Binary to decimal \nChoose an option: ");
        fflush(stdout);
        int option;
        scanf("%d", &option);
        switch (option) {
            case 1:
                decimal_to_binary();
                break;
            case 2:
                binary_to_decimal();
                break;
            default:
                printf("Invalid option. \n");
                break;
        }
    }

    return 0;
}