#include <stdio.h>

#define PRIZE 1000000

#define PERCENT 8

#define WAGE 100000

/**
 * @brief Упражнение по программированию 6.17
 *
 * @details Чаки Лаки выиграл миллион долларов (после уплаты всех налогов), который он поместил на счет со ставкой 8%
 * годовых. В последний день каждого года Чаки снимает со счета по $100000. Напишите программу, которая вычисляет,
 * сколько лет пройдет до того, как на счету Чаки не останется денег.
 *
 * @return int
 */
int main(void)
{
    int depo, year;

    depo = PRIZE;

    year = 0;
    do {
        depo -= WAGE;
        depo += depo * PERCENT / 100;
        year++;
    } while (depo > 0);

    printf("Пройдет %d лет\n", year);

    return 0;
}
