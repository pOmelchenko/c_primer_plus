#include <stdio.h>

#define NUMBERS_COUNT 8

/**
 * @brief Упражнение по программированию 6.11
 *
 * @details Напишите программу, которая читает восемь целых чисел в массив, после чего выводит их в обратном порядке
 *
 * @return int
 */
int main(void) {
    int numbers[NUMBERS_COUNT];

    printf("Введите 8 целых чисел: ");
    scanf(
            "%d%d%d%d%d%d%d%d",
            &numbers[0],
            &numbers[1],
            &numbers[2],
            &numbers[3],
            &numbers[4],
            &numbers[5],
            &numbers[6],
            &numbers[7]
    );

    printf(
            "%d%d%d%d%d%d%d%d",
            numbers[7],
            numbers[6],
            numbers[5],
            numbers[4],
            numbers[3],
            numbers[2],
            numbers[1],
            numbers[0]
    );

    return 0;
}
