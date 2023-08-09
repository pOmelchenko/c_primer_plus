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
    unsigned long num, div, prime, count = 0;

    bool is_prime;

    printf("Введите число: ");

    while (scanf("%lu", &num) == 1) {
        for (prime = 2; prime <= num; prime++) {
            is_prime = true;
            for (div = 2; (div * div) <= prime; div++)
            {
                if (prime % div == 0) {
                    is_prime = false;
                }
            }

            if (is_prime) {
                count++;
                printf("%5lu", prime);

                if (count % 10 == 0) {
                    printf("\n");
                }
            }
        }

        printf("\nВведите следующее число для анализа, или введите q для завершения.\n");
    }

    printf("До свидания\n");

    return 0;
}
