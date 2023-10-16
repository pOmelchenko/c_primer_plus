#include <stdio.h>

/**
 * @brief Функция которая выводит матрицу из переданных символов
 */

/**
 * @brief Функция которая выводит матрицу из переданных символов
 * @param ch символ в матрице
 * @param i количество столбцов
 * @param j количество строк
 */
void chline(char ch, int i, int j);

/**
 * @brief Упражнение по программированию 9.2
 *
 * @details Напишите функцию по имени <code>chline(ch, i, j)</code>, которая выводит требуемый символ в столбцах с
 * <code>i</code> по <code>j</code>. Протестируйте эту функцию с помощью простого драйвера.
 *
 * @return int
 */
int main(void)
{
    chline('a', 3, 3);

    chline('b', 3, 6);

    chline('c', 6, 3);

    return 0;
}

void chline(char ch, int i, int j)
{
    int x, y;

    for (y = 0; y < j; y++) {
        for (x = 0; x < i; x++) {
            putchar(ch);
        }
        putchar('\n');
    }
}
