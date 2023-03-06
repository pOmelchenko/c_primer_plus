#include <stdio.h>

/**
 * @brief Упражнение по программированию 4.1
 *
 * @details Напишите программу, которая запрашивает имя и фамилию, а затем выводит их в формате <i>имя, фамилия</i>
 *
 * @return
 */
int main(void)
{
    char first_name[65];
    char second_name[65];

    printf("Введите имя и фамилию: ");
    scanf("%64s %64s", first_name, second_name);
    printf("%s, %s", second_name, first_name);

    return 0;
}
