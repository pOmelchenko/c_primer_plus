#include <stdio.h>

#define DANBAR_NUMBER 150

#define FIRST_FRIENDS_COUNT 5

/**
 * @brief Упражнение по программированию 6.18
 *
 * @details Профессор Робинс присоединился к группе в социальной сети. Вначале у него было пять друзей. Он заметил, что
 * количество его друзей увеличивалось следующим образом. По истечении первой недели один человек вышел из числа друзей,
 * а количество друзей удвоилось. По истечении второй недели двое вышли из числа друзей: а количество друзей удвоилось.
 * Выражаясь в общем, по истечении N-й недели N людей выходили из числа друзей, а количество друзей удваивалось.
 * Напишите программу, которая вычисляет количество друзей в конце каждой недели. Программ должна продолжать подсчет до
 * тех пор, пока количество друзей не превысит число Данбара. Число Данбара — это приблизительная оценка максимального
 * размера сплоченной социальной группы, в которой каждый член знает всех остальных членов и осведомлен об их
 * взаимоотношениях друг с другом. Его приближенное значение равно 150.
 *
 * @return int
 */
int main(void)
{
    int friends, friends_limit, week, unfriended;

    friends = FIRST_FRIENDS_COUNT;
    friends_limit = DANBAR_NUMBER;

    week = 1;

    while (friends < friends_limit) {
        friends_limit = DANBAR_NUMBER - friends / 2;

        unfriended = week;

        friends -= unfriended;
        friends *= 2;

        printf("Неделя %d: у профессора Робинса %d друзей\n", week, friends);

        week++;
    }

    return 0;
}
