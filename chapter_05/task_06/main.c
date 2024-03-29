#include <stdio.h>

/**
 * @brief Упражнение по программированию 5.6
 *
 * @details Теперь модифицируйте программу из упражнения 5, чтобы она вычисляла сумму квадратов целых чисел. (Или,
 * если вам так больше нравится, программа должна вычислять сумму, которую вы получите, если в первый день вам заплатят
 * $1 во второй день — $4, в третий день — $9 и т.д.) В языке C отсутствует функция возведения в квадрат, но, как вы
 * знаете, квадрат числа <code>n</code> равен <code>n*n</code>.
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
        sum = sum + count * count;
    printf("sum = %d\n", sum);

    return 0;
}
