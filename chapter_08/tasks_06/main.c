#include <stdio.h>
char get_first(void);

/**
 * @brief Упражнение по программированию 8.6
 *
 * @details Модифицируйте функцию <code>get_first()</code> из листинга 8.8 так, чтобы она возвращала первый встречный
 * непробельный символ. Протестируйте ее в какой-нибудь простой программе.
 *
 * @return int
 */
int main(void)
{
    char ch;
    ch = get_first();

    printf("Результат: %c\n", ch);
    printf("Программа завершена.\n");
    return 0;
}

char get_first(void)
{
    int ch;

    while ((ch = getchar()) == ' ')
        continue;
    while (getchar() != '\n')
        continue;

    return ch;
}
