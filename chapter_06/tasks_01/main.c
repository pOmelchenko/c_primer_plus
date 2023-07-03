#include <stdio.h>

#define LETTERS_COUNT 26
#define START_LETTER 'a'

/**
 * @brief Упражнение по программированию 6.1
 *
 * @details Напишите программу, которая создает массив из 26 элементов и помещает в него 26 строчных букв английского
 * алфавита. Также предусмотрите вывод содержимого этого массива.
 *
 * @return int
 */
int main(void)
{
    char chars[LETTERS_COUNT];
    int i;

    for (i = 0; i < LETTERS_COUNT; i++) {
        chars[i] = START_LETTER + i;
    }
    for (i = 0; i < LETTERS_COUNT; i++) {
        printf("%c", chars[i]);
    }
    printf("\n");

    return 0;
}
