#include <stdio.h>

/**
 * @brief получением минимального, среднего и максимального числа из трех предложенных
 *
 * @param a число которое станет минимальным из переданных
 * @param b среднее значение всех переданных чисел
 * @param c число которое станет максимальным из переданных
 */
void order_numbers(double * a, double * b, double * c);

/**
 * @brief Упражнение по программированию 9.6
 *
 * @details Напишите и протестируйте функцию, которая принимает в качестве аргументов адреса трех переменных
 * <code>double</code> и помещает наименьшее значение в первую переменную, среднее значение — во вторую, а наибольшее
 * значение — в третью.
 *
 * @return int
 */
int main(void)
{
    double a, b, c;

    a = 100;
    b = 50;
    c = 10;

    order_numbers(&a, &b, &c);

    printf("a: %f, b: %f, c: %f", a, b, c);

    return 0;
}

void order_numbers(double * a, double * b, double * c)
{
    double min = *a;

    if (*b < min) {
        min = *b;
    }

    if (*c < min) {
        min = *c;
    }

    double awg = (*a + *b + *c) / 3;

    double max = *a;

    if (*b > max) {
        max = *b;
    }

    if (*c > max) {
        max = *c;
    }

    *a = min;
    *b = awg;
    *c = max;
}
