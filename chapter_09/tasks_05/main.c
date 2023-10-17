#include <stdio.h>

/**
 * @brief замена обоих числе большим из переданных
 *
 * @param a первое число
 * @param b второе число
 */
void large_of(double * a, double * b);

/**
 * @brief Упражнение по программированию 9.5
 *
 * @details Напишите и протестируйте функцию по имени <code>large_of()</code>, которая заменяет содержимое двух
 * переменных <code>double</code> большим из значений. Например, вызов <code>large_of(x,y)</code> присвоит переменным
 * <code>x</code> и <code>y</code> большее из их значений.
 *
 * @return int
 */
int main(void)
{
    double a, b;

    a = 10.1;
    b = 3.2;

    large_of(&a, &b);

    printf("Result a = %0.2f, b = %0.2f", a, b);

    return 0;
}

void large_of(double * a, double * b)
{
    *a = *b = (*a > *b ? *a : *b);
}
