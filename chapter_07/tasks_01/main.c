#include <stdio.h>

#define STOP_SHAR '#'

/**
 * @brief Упражнение по программированию 7.1
 *
 * @details Напишите программу, которая читает входные данные до тех пор, пока не встретится символ <code>#</code>, а
 * затем отображается количество прочитанных пробелов, количество символов новой строки и количество всех остальных
 * символов.
 *
 * @return int
 */
int main(void)
{
    int spaces_count, new_line_count, other_charts_count;
    char character;

    spaces_count = 0;
    new_line_count = 0;
    other_charts_count = 0;

    while((character = getchar()) != STOP_SHAR) {
        if (character == ' ') {
            spaces_count++;
        } else if (character == '\n') {
            new_line_count++;
        } else {
            other_charts_count++;
        }
    }

    printf("Пробелов: %d\nНовых строк: %d\nПрочие символы: %d\n", spaces_count, new_line_count, other_charts_count);

    return 0;
}
