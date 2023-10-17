#include <stdio.h>

/**
 * @brief печать символов в матрице
 *
 * @param ch символ для вывода
 * @param cols количество символов в строке
 * @param rows количество строк
 */
void print_char(char ch, int cols, int rows);

/**
 * @brief Упражнение по программированию 9.3
 *
 * @details Напишите функцию, которая принимает три аргумента: символ и два целых числа. Символ предназначен для вывода.
 * Первое целое значение задает количество указанных символов в строке, а второе целое число устанавливает количество
 * таких строк. Напишите программу, в которой используется эта функция.
 *
 * @return int
 */
int main(void)
{
    print_char('a', 10, 5);

    return 0;
}

void print_char(char ch, int cols, int rows)
{
    int c, r;

    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            putchar(ch);
        }
        putchar('\n');
    }
}
