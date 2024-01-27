#include <stdio.h>

#define SIZE 4

/**
 * @brief Листинг 10.2
 *
 * @file no_data.c
 *
 * @return int
 */
int main(void)
{
    int no_data[SIZE]; /* неинициализированный массив */
    int i;
    printf("%2s%14s\n",
           "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
    return 0;
}
