#include <stdio.h>

/**
 * @brief Количество клеток шахматной доски
 */
#define SQUARES 64

/**
 * @file wheat.c
 *
 * @brief Экспоненциальный рост
 *
 * @return int
 */
int main(void)
{
    /**
     * @brief Мировой урожай пшеницы в зернах
     */
    const double CROP = 2E16;

    double current, total;

    int count = 1;

    printf("квадрат   добавлено    итого        процент от \n");
    printf("          зерен        зерен        мирового урожая\n");

    total = current = 1.0; // начинаем с одного зернышка

    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    while(count < SQUARES) {
        count = count + 1;
        current = 2.0 * current; // удвоить количество зерен на следующей клетке
        total = total + current; // обновить итоговую сумму

        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }

    printf("Вот и всё.\n");

    return 0;
}
