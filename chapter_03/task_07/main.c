#include <stdio.h>

/**
 * @brief Упражнение по программированию 3.7
 *
 * @details В дюйме имеется 2.54 сантиметра. Напишите программу, которая предлагает ввести рост в дюймах, после чего
 * выводит на экран этот рост в сантиметрах. Либо, если вам так больше нравится, программа может запрашивать рост в
 * сантиметрах и переводить его в дюймы.
 *
 * @return int
 */
int main(void)
{
    float inch_per_centimeter = 2.54;

    printf("Введите рост в дюймах: ");
    float height_per_inch;
    scanf("%f", &height_per_inch);

    printf("Введенный рост составляет %.1f сантиметров.\n", inch_per_centimeter * height_per_inch);

    return 0;
}