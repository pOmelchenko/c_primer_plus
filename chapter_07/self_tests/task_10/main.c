#include <stdio.h>

/**
 * @brief Вопрос для самоконтроля 7.10
 *
 * @return int
 */
int main(void)
{
    char ch;
    while ((ch = getchar()) != '#') {
        if (ch == '\n')
            continue;
        printf("Шаг 1\n");
        if (ch == 'c')
            continue;
        else if (ch == 'b')
            break;
        else if (ch == 'h')
            goto laststep;
        printf("Шаг 2\n");
        laststep: printf("Шаг 3\n");
    }
    printf("Готово\n");
    return 0;
}
