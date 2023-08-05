#include <stdio.h>
#include <ctype.h>

/**
 * @brief Упражнение по программированию 7.3
 *
 * @details Напишите программу, которая читает целые числа до тех пор, пока не встретится число 0. После прекращения
 * ввода программа должна сообщить обще количество введенных четных чисел (за исключением 0), среднее значение
 * введенных четных чисел, общее количество введенных нечетных чисел и среднее значение нечетных чисел.
 *
 * @return int
 */
int main(void)
{
    char number;
    int counter = 0, sum = 0, even = 0, odd = 0;

    while ((number = getchar()) != '0') {
        counter++;
        sum += digittoint(number);

        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Введено %d чисел, среднее число %d, четных %d, нечетных %d", counter, sum / counter, even, odd);

    return 0;
}
