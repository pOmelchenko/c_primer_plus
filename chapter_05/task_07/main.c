#include <stdio.h>

/**
 * @brief Функция возведения числа в куб
 * @param number
 * @return
 */
double cube(double number);

/**
 * @brief Упражнение по программированию 5.7
 *
 * @details Напишите программу, которая запрашивает ввод числа типа <code>double</code> и выводит значение куба этого
 * числа. Для этого используйте собственную функцию, которая возводит значение в куб и выводит полученный результат.
 * Программа <code>main()</code> должна передавать этой функции вводимое значение.
 *
 * @return int
 */
int main(void) {
    double number;

    printf("Введите число: ");
    scanf("%lf", &number);

    printf("Результат %.2f\n", cube(number));

    return 0;
}

double cube(double number) {
    return number * number * number;
}
