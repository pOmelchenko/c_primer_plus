#include <stdio.h>

/**
 * @brief функция расчета результата
 *
 * @details результат вычисляется по следующей формуле:
 * <pre>
 * (a - b) / (a * b)
 * </pre>
 *
 * @param num_a
 * @param num_b
 * @return
 */
float calculate(float num_a, float num_b);

/**
 * @brief Упражнение по программированию 6.9
 *
 * @details Модифицируйте упражнение 8 так, чтобы программа использовала функцию для возврата результатов вычислений.
 *
 * @return int
 */
int main(void)
{
    float num_a, num_b;
    printf("Введите пару числе чтобы произвести вычисления: ");

    while(scanf("%f%f", &num_a, &num_b)) {
        printf("(%f - %f) / (%f * %f) = %f\n", num_a, num_b, num_a, num_b, calculate(num_a, num_b));
        printf("Введите другую пару чисел, или не числовой символ чтобы прекратить работу: \n");
    }

    printf("Удачи!\n");

    return 0;
}

float calculate(float num_a, float num_b) {
    return (num_a - num_b)/(num_a * num_b);
}
