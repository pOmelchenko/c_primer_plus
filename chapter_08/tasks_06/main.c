#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

/**
 * @brief Упражнение по программированию 8.6
 *
 * @details Модифицируйте функцию <code>get_first()</code> из листинга 8.8 так, чтобы она возвращала первый встречный
 * непробельный символ. Протестируйте ее в какой-нибудь простой программе.
 *
 * @return int
 */
int main(void)
{
    int choice;
    void count(void);
    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a':
                printf("Покупайте дешево, продавайте дорого\n");
                break;
            case 'b':
                printf("\a"); /* ANSI */
                break;
            case 'c':
                count();
                break;
            default:
                printf("Ошибка!\n");
                break;
        }
    }
    printf("Программа завершена.\n");
    return 0;
}

void count(void)
{
    int n, i;
    printf("До какого предела вести счет? Введите целое число:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
        continue;
}

char get_choice(void)
{
    int ch;
    printf("Введите букву, соответствующую выбранному варианту:\n");
    printf("a. совет          c. звонок\n");
    printf("b. подсчет        q. выход\n");
    ch = get_first();
    while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'q') {
        printf("Выберите a, b, c или q.\n");
        ch = get_first();
    }
    return ch;
}

char get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

int get_int(void)
{
    int input;
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);  // отбросить неправильный ввод
        printf(" не является целочисленным.\n");
        printf("Введите целое число, такое как 25, -178 или 3:\n");
    }
    return input;
}
