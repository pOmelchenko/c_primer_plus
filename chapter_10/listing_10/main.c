#include <stdio.h>

#define SIZE 10

int sum(int array[], int array_size);

/**
 * @brief Листинг 10.10
 *
 * @file sum_arr1.c
 *
 * @return int
 */
int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("Общая сумма элементов массива marbles равна %ld.\n", answer);
    printf("Объем памяти, отведенной под массив marbles, составляет %zd байтов.\n", sizeof marbles);

    return 0;
}

int sum(int array[], int array_size) {
    int index;
    int total = 0;
    for (index = 0; index < array_size; index++) {
        total += array[index];
    }
    printf("Размер array составляет %zd байтов.\n", sizeof array);
    return total;
}
