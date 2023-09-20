#include <stdio.h>

#define NORMAL_WORK_TIME 40
#define OVERTIME_COEFFICIENT 1.5

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
    int hours, menu;
    float normal_work_time, earned, tax;

    while (1) {
        printf("***********************************************************************\n");
        printf("1) $8.75/ч                     2) $9.33/ч\n");
        printf("3) $10.00/ч                    4) $11.20/ч\n");
        printf("5) Выход\n");
        printf("***********************************************************************\n");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                normal_work_time = 8.75;
                break;
            case 2:
                normal_work_time = 8.75;
                break;
            case 3:
                normal_work_time = 8.75;
                break;
            case 4:
                normal_work_time = 8.75;
                break;
            case 5:
                return 0;
            default:
                printf("Попробуйте еще раз\n");
                continue;
        }

        printf("Введите количество отработанных часов: ");
        scanf("%d", &hours);

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

    return 0;
}
