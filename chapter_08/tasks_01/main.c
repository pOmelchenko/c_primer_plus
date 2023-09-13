#include <stdio.h>

/**
 * @brief Упражнение по программированию 8.1
 *
 * @details Напишите программу, которая подсчитывает количество символов во входных данных до достижения конца файла.
 *
 * @return int
 */
int main(void)
{
    int count = 0;

    while (getchar() != EOF) {
        count++;
    }

    printf("В файле было %d символов.\n", count);

    return 0;
}
