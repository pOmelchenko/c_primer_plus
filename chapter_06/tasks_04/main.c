#include <stdio.h>

#define START_LETTER 'A'

#define ROWS 6

/**
 * @brief Упражнение по программированию 6.4
 *
 * @details Воспользуйтесь вложенными циклами, чтобы написать программу, которая выводит следующую последовательность
 * символов:
 * <pre>
 * A<br>
 * BC<br>
 * DEF<br>
 * GHIJ<br>
 * KLMNO<br>
 * PQRSTU
 * </pre>
 *
 * @note Если в вашей системе не используется кодировка, в которой буквы представлены в числовом порядке, см. примечание
 * в упражнении 3.
 *
 * @return int
 */
int main(void)
{
    int row, col, offset;

    offset = 0;

    for (row = 0; row < ROWS; row++) {
        for (col = 0; col <= row; col++) {
            printf("%c", START_LETTER + offset);
            offset++;
        }

        printf("\n");
    }

    return 0;
}
