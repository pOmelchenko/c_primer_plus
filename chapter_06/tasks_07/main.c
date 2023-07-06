#include <stdio.h>
#include <string.h>

/**
 * @brief Упражнение по программированию 6.7
 *
 * @details Напишите программу, которая читает слово в символьный массив, а затем выводит это слово в обратном порядке.
 *
 * @note Воспользуйтесь функцией <code>strlen()</code> (глава 4) для вычисления индекса последнего символа массива.
 *
 * @return int
 */
int main(void)
{
    char word[65];
    int index;

    printf("Введите слово: ");
    scanf("%64s", word);

    for (index = strlen(word); index >= 0; index--) {
        printf("%c", word[index]);
    }

    printf("\n");

    return 0;
}
