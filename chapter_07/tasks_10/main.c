#include <stdio.h>

#define TAX_CATEGORY_SINGLE 17850
#define TAX_CATEGORY_MARRIAGE 23900
#define TAX_CATEGORY_MARRIAGE_AND_JOINT 29750
#define TAX_CATEGORY_MARRIAGE_AND_SEPARATE 14875

/**
 * @brief Упражнение по программированию 7.10
 *
 * @details В 1988 году шкала федеральных налоговых ставок Соединенных Штатов была самой простой за всё прошедшее время.
 * Она содержала четыре категории, каждая из которых включала две ставки. Ниже приведены самые общие данные (суммы в
 * долларах представляют собой доход, облагаемый налогом)
 * <table>
 *  <thead>
 *    <tr><th>Категория</th><th>Налог</th></tr>
 *  </thead>
 *  <tbody>
 *    <tr>
 *      <td>Одинокий</td>
 *      <td>15% с первых $17850 плюс 28% от суммы, превышающей указанную</td>
 *    </tr>
 *    <tr>
 *      <td>Глава семейства</td>
 *      <td>15% с первых $23900 плюс 28% от суммы, превышающей указанную</td>
 *    </tr>
 *    <tr>
 *      <td>Состоит в браке, совместное ведение хозяйства</td>
 *      <td>15% с первых $29750 плюс 28% от суммы, превышающей указанную</td>
 *    </tr>
 *    <tr>
 *      <td>Состоит в браке, раздельное ведение хозяйства</td>
 *      <td>15% с первых $14875 плюс 28% от суммы, превышающей указанную</td>
 *    </tr>
 *  </tbody>
 * </table>
 * Например, одинокий работник, получающий облагаемый налогом доход в $20000, платит налоги в сумме
 * 0.15х$17850 + 0.28х($20000 - $17850). Напишите программу, которая позволяет пользователю указать категорию и
 * облагаемый налогом доход, после чего вычисляет сумму налога. Используйте цикл, чтобы пользователь мог вводить
 * разные варианты налогообложения.
 *
 * @return int
 */
int main(void)
{
    float income = 0.0, tax_amount = 0.0, income_over_the_limit = 0.0;
    int select;

    printf("Введите облагаемый налогом доход: ");
    scanf("%f", &income);

    printf("Выберите один из вариантов налогообложения: ");
    while (scanf("%d", &select) == 1) {
        switch (select) {
            case 1:
                printf("Выбран вариант: Одинокий\n");

                if (income <= TAX_CATEGORY_SINGLE) {
                    tax_amount = income * 0.15;
                } else {
                    tax_amount = TAX_CATEGORY_SINGLE * 0.15;
                    income_over_the_limit = income - TAX_CATEGORY_SINGLE;
                }
                break;
            case 2:
                printf("Выбран вариант: Глава семейства\n");

                if (income <= TAX_CATEGORY_MARRIAGE) {
                    tax_amount = income * 0.15;
                } else {
                    tax_amount = TAX_CATEGORY_MARRIAGE * 0.15;
                    income_over_the_limit = income - TAX_CATEGORY_MARRIAGE;
                }
                break;
            case 3:
                printf("Выбран вариант: Состоит в браке, совместное ведение хозяйства\n");

                if (income <= TAX_CATEGORY_MARRIAGE_AND_JOINT) {
                    tax_amount = income * 0.15;
                } else {
                    tax_amount = TAX_CATEGORY_MARRIAGE_AND_JOINT * 0.15;
                    income_over_the_limit = income - TAX_CATEGORY_MARRIAGE_AND_JOINT;
                }
                break;
            case 4:
                printf("Выбран вариант: Состоит в браке, раздельное ведение хозяйства\n");

                if (income <= TAX_CATEGORY_MARRIAGE_AND_SEPARATE) {
                    tax_amount = income * 0.15;
                } else {
                    tax_amount = TAX_CATEGORY_MARRIAGE_AND_SEPARATE * 0.15;
                    income_over_the_limit = income - TAX_CATEGORY_MARRIAGE_AND_SEPARATE;
                }
                break;
        }

        tax_amount += income_over_the_limit * 0.28;

        printf("Размер налога: %0.2f\n", tax_amount);

        printf("Выберите один из вариантов налогообложения: ");
    }

    return 0;
}
