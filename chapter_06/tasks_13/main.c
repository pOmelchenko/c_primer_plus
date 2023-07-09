#include <stdio.h>

#define ELEMENTS_COUNT 8

/**
 * @brief Упражнение по программированию 6.13
 *
 * @details Напишите программу, которая создает восьмиэлементный массив типа <code>int</code> и помещает в него элементы
 * начальных восьми степеней <code>2</code>, а затем выводит полученные значения. Применяйте цикл <code>for</code> для
 * вычисления элементов массива, и ради разнообразия для отображения значений воспользуйтесь циклом
 * <code>do while</code>.
 *
 * @return int
 */
int main(void)
{
    int results[ELEMENTS_COUNT], element_index, power;

    for (element_index = 0; element_index < ELEMENTS_COUNT; element_index++) {
        results[element_index] = 2;

        for (power = 2; power <= element_index + 2; power++) {
            results[element_index] *= 2;
        }
    }

    element_index = 0;

    do {
        printf("%d\n", results[element_index]);
        element_index++;
    } while (element_index < ELEMENTS_COUNT);

    return 0;
}
