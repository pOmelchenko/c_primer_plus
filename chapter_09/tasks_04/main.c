#include <stdio.h>

/**
 * @brief Вычисление гармонического значения
 *
 * @param a первое число
 * @param b второе число
 * @return
 */
double harmonic_awg(double a, double b);

/**
 * @brief Упражнение по программированию 9.4
 *
 * @details Среднее гармоническое значение двух чисел получается путем инвертирования этих чисел, вычисления среднего
 * значения инверсий и получения инверсии результата. Напишите функцию, которая принимает два аргумента
 * <code>double</code> и возвращает среднее гармоническое значение этих двух чисел.
 *
 * @return int
 */
int main(void)
{
    printf("Result: %f", harmonic_awg(10, 5));

    return 0;
}

double harmonic_awg(double a, double b)
{
    return 2.0 / (1 / a + 1 / b);
}
