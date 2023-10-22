#include <stdio.h>

void to_binary(unsigned long number, int base);

/**
 * @brief Упражнение по программированию 9.10
 *
 * @details Обобщите функцию <code>to_binary()</code> из листинга 9.8 до функции <code>to_base_n()</code>, которая
 * принимает второй аргумент в диапазоне от 2 о 10. Она должна выводить число, переданное в первом аргументе, в системе
 * счисления с основанием, которое указанно во втором аргументе. Например, вызов <code>to_base_n(129,8)</code> должен
 * отобразить <code>201</code>, т.е. восьмеричный эквивалент числа <code>129</code>. Протестируйте готовую функцию в
 * какой-нибудь программе.
 *
 * @return int
 */
int main(void)
{
    unsigned long int number;
    int base;

    printf("Введите целое число (q для завершения):\n");
    while (scanf("%lu%d", &number, &base) == 2)
    {
        printf("Двоичный эквивалент: ");
        to_binary(number, base);
        putchar('\n');
        printf("Введите целое число (q для завершения):\n");
    }
    printf("Программа завершена.\n");

    return 0;
}

void to_binary(unsigned long number, int base)
{
    if (base < 2 || base > 10) {
        printf("!!! Задан неверный диапазон основания системы счисления\n");
        return;
    }

    int result;

    result = number % base;

    if (number >= base)
        to_binary(number / base, base);

    printf("%d", result);
}