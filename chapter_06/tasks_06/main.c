#include <stdio.h>

/**
 * @brief Упражнение по программированию 6.6
 *
 * @details Напишите программу для вывода таблицы, в каждой строке которой представлено целое число, его и его куб.
 * Запросите у пользователя верхний и нижний пределы таблицы. Используйте цикл <code>for</code>.
 *
 * @return int
 */
int main(void)
{
    int min, max, row;
    printf("Введите верхний и нижний пределы таблицы: ");
    scanf("%d%d", &max, &min);

    for (row = min; row <= max; row++) {
        printf(
            "%5d | %5d | %5d\n",
            row,
            row * row,
            row * row * row
        );
    }

    return 0;
}
