#include <stdio.h>

/**
 * @brief Упражнение по программированию 3.2
 *
 * @details Напишите прогорамму, которая приглашает ввести некоторое значение в коде ASCII, например, 66, а затем
 * выводит символ, которому соответствует введенный код.
 *
 * @return
 */
int main(void)
{
    char symbol;
    printf("Введите код символа: ___\b\b\b");
    scanf("%d", &symbol);

    printf("Результат: %c", symbol);

    return 0;
}
