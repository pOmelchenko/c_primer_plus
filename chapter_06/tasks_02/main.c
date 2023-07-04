#include <stdio.h>

#define LINES 5

/**
 * @brief Упражнение по программированию 6.2
 *
 * @details Воспользуйтесь вложенными циклами, чтобы написать программу, которая выводит следующую последовательность
 * символов:
 * <pre>
 * $<br>
 * $$<br>
 * $$$<br>
 * $$$$<br>
 * $$$$$
 * </pre>
 *
 * @return int
 */
int main(void)
{
    int i, j;

    for (i = 0; i < LINES; i++) {
        for (j = 0; j <= i; j++) {
            printf("$");
        }

        printf("\n");
    }

    return 0;
}
