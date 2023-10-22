#include <stdio.h>

/**
 * @brief Функция возведения в степень
 * @param n число возводимое в степень
 * @param p число степени в которую будет возводиться первый аргумент
 * @return
 */
double power(double n, int p);

/**
 * @brief Упражнение по программированию 9.9
 *
 * @details Еще раз выполните упражнение 8, но на этот раз используйте рекурсивную функцию.
 *
 * @return int
 */
int main(void)
{
    double x, xpow;
    int exp;

    printf("Введите число и целую степень, в которую число будет возведено.\n");
    printf("Для завершения программы введите q\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g в степени %d равно %.5g\n", x, exp, xpow);
        printf("Введите следующую пару чисел или q для завершения.\n");
    }
    printf("Надеемся, что вы оценили это упражнение -- до свиданья!\n");

    return 0;
}

double power(double n, int p)
{
    double result = n;

    if (p != 0 && n == 0) {
        return 0;
    }

    if (p == 0 && n !=0 ) {
        return 1;
    }

    if (n == 0 && p == 0) {
        printf("!! Результат не определен\n");
        return 1;
    }

    if (p > 0) {
        result *= power(n, p - 1);
    }

    if (p < 0) {
        p *= -1;
        result *= power(n, p - 1);
        result = 1 / result;
    }

    return result;
}
