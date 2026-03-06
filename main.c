//
// Created by chef on 3/2/26.
//

#include "main.h"

#include <stdio.h>
#include <string.h>

int main() {
    int arr[3][3][3] = {
        {
            {00001, 00010, 00011},
            {01011, 22, 33},
            {111, 222, 333}
        }, {
            {4, 5, 6},
            {44, 55, 66},
            {444, 555, 666}
        },
        {
            {7, 8 ,9},
            {77, 88 ,99},
            {777, 888, 999}
        }
    };
    while (1) {

        int input;
        printf("First input: ");
        fflush(stdout);
        scanf("%d", &input);
        if (input < 3) {
            const int x = input;
            printf("Second input: ");
            fflush(stdout);
            scanf("%d", &input);
            if (input < 3) {
                const int y = input;
                printf("Third input: ");
                fflush(stdout);
                scanf("%d", &input);
                if (input < 3) {
                    const int z = input;
                    printf("%d\n", * ( * ( * ( arr + x ) + y ) + z ) );
                }
            }
        }
    }

    return 0;
}
