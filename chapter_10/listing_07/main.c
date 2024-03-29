#include <stdio.h>

/**
 * Количество месяцев в году
 */
#define MONTHS 12

/**
 * Количество лет, для которых доступны данные
 */
#define YEARS 5

/**
 * @brief Листинг 10.7
 *
 * @file rain.c
 *
 * @return int
 */
int main(void)
{
    // Инициализация данными об осадках за период с 2010 по 2014 гг.
    const float rain[YEARS][MONTHS] = {
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
            {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
            {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
            {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year, month;
    float subtot, total;

    printf("  ГОД   КОЛИЧЕСТВО ОСАДКОВ (в дюймах)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    { // для каждого года суммировать количество осадков за каждый месяц
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot; // общая сумма для всех лет
    }

    printf("\nСреднегодовое количество осадков составляет %.1f дюймов.\n\n", total/YEARS);
    printf("СРЕДНЕМЕСЯЧНОЕ КОЛИЧЕСТВО ОСАДКОВ:\n\n");
    printf(" Янв  Фев  Мар  Апр  Май  Июн  Июл  Авг  Сен  Окт  Ноя  Дек\n");
    for (month = 0; month < MONTHS; month++)
    { // для каждого месяца суммировать количество осадков на протяжении годов
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot/YEARS);
    }

    printf("\n");

    return 0;
}
