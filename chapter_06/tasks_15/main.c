#include <stdio.h>

#define LIMIT 256

/**
 * @brief Упражнение по программированию 6.15
 *
 * @details Напишите программу, которая читает строку ввода, а затем выводит ее в обратном порядке. Ввод можно сохранять
 * в массива значений типа <code>char</code>; предполагается, что строка состоит не более чем из 255 символов.
 * Вспомните, что для чтения символа за раз можно применять функцию <code>scanf()</code> со спецификатором
 * <code>%c</code>, а при нажатии клавиши <code><Enter></code> генерируется символ новой строки (<code>\\n</code>).
 *
 * @return int
 */
int main(void)
{
    char chars[LIMIT];
    int index;

    scanf("%c", &chars[0]);
    for (index = 1; index < LIMIT; index++) {
        scanf("%c", &chars[index]);
    }

    for (index = LIMIT - 1; index >= 0; index--) {
        printf("%c", chars[index]);
    }

    printf("\n");

    return 0;
}
