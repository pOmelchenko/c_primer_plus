#include <stdio.h>

#define SIZE 4

/**
 * @brief Листинг 10.6
 *
 * @details Выход за границы массива
 *
 * @file bounds.c
 *
 * @return int
 */
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++)
        arr[i] = 2 * i + 1;
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("адрес arr[-1]: %p\n", &arr[-1]);
    printf("адрес arr[4]:  %p\n", &arr[4]);
    printf("адрес value1:  %p\n", &value1);
    printf("адрес value2:  %p\n", &value2);

    return 0;
}
