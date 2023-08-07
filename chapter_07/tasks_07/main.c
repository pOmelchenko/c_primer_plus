#include <stdio.h>

#define NORMAL_WORK_TIME 40
#define NORMAL_TARIFF_RATE 10
#define OVERTIME_COEFFICIENT 1.5

/**
 * @brief Упражнение по программированию 7.7
 *
 * @details Напишите программу, которая запрашивает количество часов, отработанных за неделю, и выводит значение общей
 * суммы начислений, налогов и чистой зарплаты. Исходите из перечисленных ниже утверждений.
 * <ul>
 * <li>Основная тарифная ставка заработной платы = $10.00/час</li>
 * <li>Сверхурочные часы (превышающие 40 часов в неделю) = коэффициент 1,5</li>
 * <li>Налоговая ставка:<ul>
 * <li>15% с первых $300;</li>
 * <li>20% со следующих $150;</li>
 * <li>25% с остатка.</li>
 * </ul>
 * </li>
 * </ul>
 * Используйте константы <code>#define</code> и не беспокойтесь, если приведенный пример не соответствует действующему
 * налогообложения.
 * 
 * @return int
 */
int main(void)
{
    int hours;
    float earned, tax;


    printf("Введите количество отработанных часов: ");
    scanf("%d", &hours);

    if (hours <= 40) {
        earned = hours * NORMAL_TARIFF_RATE;
    } else {
        float normal_earned = (float) NORMAL_WORK_TIME * NORMAL_TARIFF_RATE;
        float overtime_earned = (float) (hours - NORMAL_WORK_TIME) * (NORMAL_TARIFF_RATE * OVERTIME_COEFFICIENT);

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

    return 0;
}
