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
        if (ch != '\n') {
            printf("Шаг 1\n");
            if (ch != 'c') {
                if (ch == 'b')
                    break;
                else if (ch == 'h')
                    printf("Шаг 3\n");
                else {
                    printf("Шаг 2\n");
                    printf("Шаг 3\n");
                }
            }
        }
    }
    printf("Готово\n");
    return 0;
}
