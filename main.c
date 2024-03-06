#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include "my_va_arg.h"

int sum_of_numbers(int64_t x, ...) {
    int s = 0;
    my_va_list ap, ap2;
    my_va_start(ap, x);

    char *buf;
    buf = my_va_arg(ap, int);
    va_copy(ap2, ap);
    printf("%d\n", *buf);
    buf = my_va_arg(ap, int);
    printf("%d\n", *buf);

    my_va_end(ap);

    return s;
}

int main(void) {

    int64_t result1 = sum_of_numbers((int64_t)5, (int64_t)10, (int64_t)20, (int64_t)30, (int64_t)40, (int64_t)50);
    printf("Sum 1: %lld\n", result1);
    return 0;
}
