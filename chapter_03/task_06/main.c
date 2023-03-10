#include <stdio.h>

/**
 * @brief Упражнение по программированию 3.6
 *
 * @details Масса одной молекулы воды приблизительно составляет 3.0х10^-23 грамма. Кварта воды весит примерно 950 грамм.
 * Напишите программу, которая предлагает ввести значение объема воды в квартах и отображает количество молекул воды в
 * этом объеме.
 *
 * @return int
 */
int main(void) {
    float molecule_of_water_in_gram = 3.0e-23;

    float volume_of_water;
    printf("Введите вес воды в граммах: ");
    scanf("%f", &volume_of_water);

    printf("Количество молекул в заданном весе (%.2f) равно: %.0f",
           volume_of_water,
           volume_of_water / molecule_of_water_in_gram);

    return 0;
}

// 9223372036854775808