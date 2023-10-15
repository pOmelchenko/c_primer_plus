#include <stdio.h>

double min(double, double);

/**
 * @brief Упражнение по программированию 9.1
 *
 * @details Напишите функцию по имени <code>min(x,y)</code>, которая возвращает меньшее из двух значений
 * <code>double</code>. Протестируйте эту функцию с помощью простого драйвера.
 *
 * @return int
 */
int main(void)
{
    double a, b;

    a = 2.2;
    b = 1.2;

    printf("a = %0.2f, b = %0.2f, res = %0.2f\n", a, b, min(a, b));

    a = 2.2;
    b = 3.2;

    printf("a = %0.2f, b = %0.2f, res = %0.2f\n", a, b, min(a, b));

    return 0;
}

double min(double a, double b)
{
    return a < b ? a : b;
}
