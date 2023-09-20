#include <stdio.h>

#define NORMAL_WORK_TIME 40
#define OVERTIME_COEFFICIENT 1.5

char get_choice(void);
char get_first(void);
int get_int(void);

/**
 * @brief Упражнение по программированию 8.7
 *
 * @details Модифицируйте упражнение по программированию 8 из главы 7 так, чтобы пункты меню помечались буквами, а не
 * цифрами; для прекращения ввода используйте букву <code>q</code> вместо <code>5</code>.
 *
 * @return int
 */
int main(void)
{
    int hours, choice;
    float normal_work_time, earned, tax;

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a':
                normal_work_time = 8.75;
                break;
            case 'b':
                normal_work_time = 9.33;
                break;
            case 'c':
                normal_work_time = 10.00;
                break;
            case 'd':
                normal_work_time = 11.20;
                break;
            default:
                printf("Попробуйте еще раз\n");
                continue;
        }

        printf("Введите количество отработанных часов: ");
        hours = get_int();

        if (hours <= 40) {
            earned = hours * normal_work_time;
        } else {
            float normal_earned = (float) NORMAL_WORK_TIME * normal_work_time;
            float overtime_earned = (float) (hours - NORMAL_WORK_TIME) * (normal_work_time * OVERTIME_COEFFICIENT);

            earned = normal_earned + overtime_earned;
        }

        if (earned <= 300) {
            tax = earned * 15 / 100;
        } else if (earned <= 450) {
            float second_part = earned - 300;

            tax = 300 * 15 / 100;
            tax += second_part * 20 / 100;
        } else {
            float third_part = earned - 300 - 150;

            tax = 300 * 15 / 100;
            tax += 150 * 20 / 100;
            tax += third_part * 25 / 100;
        }

        printf("Начислено: %.2f\nНалог %.2f\nЧистый доход: %.2f\n", earned, tax, earned - tax);
    }

    printf("Программа завершена.\n");

    return 0;
}

char get_choice(void)
{
    int ch;

    printf("***********************************************************************\n");
    printf("a) $8.75/ч                     b) $9.33/ч\n");
    printf("c) $10.00/ч                    d) $11.20/ч\n");
    printf("q) Выход\n");
    printf("***********************************************************************\n");

    ch = get_first();
    while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q') {
        printf("Выберите a, b, c, d или q.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;

    while ((ch = getchar()) == ' ')
        continue;
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

    while (getchar() != '\n')
        continue;

    return input;
}
