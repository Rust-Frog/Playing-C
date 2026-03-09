//
// Created by chef on 3/9/26.
//
#include <stdarg.h>
#include <stdio.h>

int get_int() {
    int result = 0;
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c >= '0' && c <= '9') {
            result = result * 10 + (c - '0');
        } else {
            break;
        }
    }

    return result;
}

void my_scanf(const char *format, ...) {
    va_list args;
    va_start(args, *format);
    while (*format != '\0') {
        if (format[0] == '%') {
            format++;
            switch(*format) {
                case 'd': {
                    int *dest = va_arg(args, int *);
                    *dest = get_int();
                    break;
                }
            }
        } else {
            //do nothing for now
        }
        format++;
    }
    va_end(args);

}

int main() {

    int test = 0;

    my_scanf("%d", &test);
    printf("%d", test);

    return 0;
}