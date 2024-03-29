#include <stdio.h>

/**
 * @brief Упражнение по программированию 5.5
 *
 * @details Внесите изменения в программу addemup.c (листинг 5.13), которая вычисляет сумму первых 20 первых чисел.
 * (Если хотите, можете считать addemup.c программой, которая вычисляет сумму, которую вы будете иметь спустя 20 дней,
 * если в первый день вы получаете $1, во второй день — $2, в третий день — $3 и т.д.) Модифицируйте программу так,
 * чтобы можно было интерактивно указывать, насколько далеко должно распространяться вычисление. Другими словами,
 * замените число 20 переменной, значение которой вводится пользователем.
 *
 * @return int
 */
int main(void) {
    int count, sum, limit;

    printf("Введите лимит: ");
    scanf("%d", &limit);

    count = 0;
    sum = 0;
    while (count++ < limit)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}