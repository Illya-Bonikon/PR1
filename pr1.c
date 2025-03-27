// Створіть макровизначення swap(t, x, y), яке здійснює обмін значеннями двох змінних x і y заданого типу t.
// Додайте перевірку на сумісність типів x і y.


#include <stdio.h>

#define swap(t, x, y) do { \
    _Static_assert(__builtin_types_compatible_p(typeof(x), typeof(y)), "Types unmatched"); \
    t temp = x; \
    x = y; \
    y = temp; \
} while (0)

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(int, a, b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

