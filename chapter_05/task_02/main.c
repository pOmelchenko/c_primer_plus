#include <stdio.h>

/**
 * @brief Упражнение по программированию 5.2
 *
 * @details Напишите программу, которая запрашивает у пользователя ввод целого числа, а затем выводит все целые числа,
 * начиная с этого числа (включая его) и заканчивая числом, которое больше введенного значения на 10 (включая его).
 * То есть,если вводится число 5, то в выводе должны присутствовать числа от 5 до 15.) Обеспечьте разделение выводимых
 * значений друг от друга пробелами, символами табуляции или символами новой строки.
 *
 * @return int
 */
int main(void)
{
    int start, finish;
    printf("Введите число: ");
    scanf("%d", &start);

    finish = start + 10;

    while (start <= finish) {
        printf("%d ", start);
        start++;
    }

    return 0;
}