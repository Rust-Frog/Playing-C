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

    int acutal_size = 0;

    printf("%d\n", size);

    for (acutal_size; acutal_size < size; acutal_size++) {
        if (str[acutal_size] == '\0') {
            break;
        }
    }

    printf("%d\n", acutal_size);

    for (int i = 0; i < acutal_size; i++) {
        printf("%c", str[acutal_size - i - 1]);
    }


    return 0;
}
