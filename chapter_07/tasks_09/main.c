#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Упражнение по программированию 7.9
 *
 * @details Напишите программу, которая принимает в качестве ввода положительное целое число и отображает все простые
 * числа, которые меньше или равны введенному числу.
 *
 * @return int
 */
int main(void)
{
    unsigned long num;
    unsigned long div;

    bool is_prime;

    printf("Введите число: ");

    while (scanf("%lu", &num) == 1) {
        for (div = 2, is_prime = true; (div * div) <= num; div++) {
            if (num % div == 0) {
                if ((div * div) != num) {
                    printf("%lu делится на %lu и %lu.\n", num, div, num / div);
                } else {
                    printf("%lu делится на %lu.\n", num, div);
                }
                is_prime = false;
            }
        }

        if (is_prime) {
            printf("%lu является простым числом.\n", num);
        }

        printf("Введите следующее число для анализа, или введите q для завершения.\n");
    }

    printf("До свидания\n");

    return 0;
}
