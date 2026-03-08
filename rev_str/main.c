//
// Created by chef on 3/8/26.
//

#include <stdio.h>

int main() {

    printf("Enter String: ");

    fflush(stdout);

    char str[100] = {0};

    scanf("%s", str);

    int size =  sizeof(str)/ sizeof(str[0]);

    for (int i = 0; i < size; i++) {
        printf("%c", str[size - i - 1]);
    }


    return 0;
}
