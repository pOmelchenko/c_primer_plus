#include <stdio.h>

void smile(void);

/**
 * @brief Упражнение по программированию 2.7
 *
 * @details Многие исследования показывают, что улыбка способствует успеху. Напишите программу, которая производит
 * следующий вывод:
 * <pre>Улыбайся!Улыбайся!Улыбайся!</pre>
 * <pre>Улыбайся!Улыбайся!</pre>
 * <pre>Улыбайся!</pre>
 * В программе должна быть определена функция, которая отображает строку “Улыбайся!" один раз. Эта функция должна
 * вызываться столько раз, сколько необходимо.
 *
 * @return int
 */
int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");

    smile();
    smile();
    printf("\n");

    smile();
    printf("\n");

    return 0;
}

void smile(void)
{
    printf("Улыбайся!");
}