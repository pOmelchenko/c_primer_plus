#include <stdio.h>

/**
 * @brief Упражнение по программированию 7.5
 *
 * @details Выполните упражнение 4, но с применением оператора <code>switch</code>.
 *
 * @return int
 */
int main(void)
{
    char input;
    int counter = 0;

    while ((input = getchar()) != '#') {
        switch (input) {
            case '.':
            case '!':
                printf("%s", (input == '!') ? "!!" : "!");
                counter++;
                break;
            default:
                printf("%c", input);
        }
    }

    printf("всего замен: %d", counter);

    return 0;
}
