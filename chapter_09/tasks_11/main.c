#include <stdio.h>
#include <stdbool.h>

/**
 * Расчет числе Фибоначчи
 * @param number До какого числа считать
 * @param show_sq Выводить в поток последовательность
 * @return
 */
unsigned long int Fibonacci(unsigned long int number, bool show_sq);

/**
 * @brief Упражнение по программированию 9.11
 *
 * @details Напишите и протестируйте функцию <code>Fibonacci()</code>, в которой для вычисления чисел Фибоначчи вместо
 * рекурсии применяется цикл.
 *
 * @return int
 */
int main(void)
{
    unsigned long int number = 7;

    printf("%lu число в последовательности Фибоначчи: %lu\n", number, Fibonacci(number, true));

    return 0;
}

unsigned long int Fibonacci(unsigned long int number, bool show_sq)
{
    if (number == 0) {
        return 0;
    }

    if (number == 1 || number == 2) {
        return 1;
    }

    unsigned long int last_num = 1;
    unsigned long int result = 1;
    unsigned long int tmp;

    if (show_sq)
        printf("1 1 ");

    for (unsigned long int step = 3; step <= number; step++)
    {
        tmp = result + last_num;
        last_num = result;
        result = tmp;
        if (show_sq)
            printf("%lu ", result);
    }

    if (show_sq)
        printf("\n");

    return result;
}
