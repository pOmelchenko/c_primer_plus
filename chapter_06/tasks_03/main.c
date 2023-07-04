#include <stdio.h>

#define START_LETTER 'F'

#define END_LETTER 'A'

/**
 * @brief Упражнение по программированию 6.3
 *
 * @details Воспользуйтесь вложенными циклами, чтобы написать программу, которая выводит следующую последовательность
 * символов:
 * <pre>
 * F<br>
 * FE<br>
 * FED<br>
 * FEDC<br>
 * FEDCB<br>
 * FEDCBA
 * </pre>
 * Примечание: если в вашей системе не используется <code>ASCII</code> или какая-то другая кодировка, в которой буквы
 * представлены в числовом порядке, то для инициалиазции символьного массива буквами алфавита вы можете применить
 * следующее объявление:
 * <pre>
 * chars lets[27] = "ABSCDEFGHIJKLMNOPQRSTUVWXYZ";
 * </pre>
 * Затем для выбора конкретных букв можно использовать индексы массива, на пример, <code>lets[0]</code> для 'А' и т.д.
 *
 * @return int
 */
int main(void)
{
    int row, col;

    for (row = 0; row <= START_LETTER - END_LETTER; row++) {
        for (col = 0; col <= row; col++) {
            printf("%c", START_LETTER - col);
        }

        printf("\n");
    }

    return 0;
}
