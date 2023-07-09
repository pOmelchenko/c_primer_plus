#include <stdio.h>

#define ARRAY_LIMIT 8

/**
 * @brief Упражнение по программированию 6.14
 *
 * @details Напишите программу, которая создает два восьмиэлементных массива типа <code>double</code> и использует цикл
 * для ввода значений восьми элементов первого массива. Программа должна накапливать в элементах второго массива суммы
 * первого массива с нарастающим итогом. Например, четвертый элемент второго массива должен быть равен сумме первых
 * четырех элементов первого массива, а пятый элемент второго второго массива — сумме пяти первых элементов первого
 * массива. (Это можно сделать с помощью вложенных циклов, однако если учесть тот факт, что пятый элемент второго
 * массива равен четвертому элементу второго массива плюс пятый элемент первого массива, можно избежать вложенных циклов
 * и применить для решения задачи единственный цикл.) В завершение воспользуйтесь циклом для вывода содержимого обоих
 * массивов, при этом первый массив должен отображаться в первой строке, а каждый элемент второго массива должен
 * помещаться непосредственно под соответствующим элементом первого массива.
 *
 * @return int
 */
int main(void)
{
    double array_input[ARRAY_LIMIT], array_sum[ARRAY_LIMIT];
    int element_index = 0;

    printf("Ведите значение для [%d] элемента массива: ", element_index);
    scanf("%lf", &array_input[element_index]);

    array_sum[element_index] = array_input[element_index];

    element_index++;

    do {
        printf("Ведите значение для [%d] элемента массива: ", element_index);
        scanf("%lf", &array_input[element_index]);

        array_sum[element_index] = array_input[element_index] + array_sum[element_index - 1];

        element_index++;
    } while (element_index < ARRAY_LIMIT);

    for (element_index = 0; element_index < ARRAY_LIMIT; element_index++) {
        printf("%12lf", array_input[element_index]);
    }
    printf("\n");

    for (element_index = 0; element_index < ARRAY_LIMIT; element_index++) {
        printf("%12lf", array_sum[element_index]);
    }
    printf("\n");

    return 0;
}
