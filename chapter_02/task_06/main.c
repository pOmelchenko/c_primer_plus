#include <stdio.h>

/**
 * \brief Напишите программу, которая создает целочисленную переменную по имени toes. Программа должна присвоить
 * переменной toes значение 10. Наряду с этим, программа должна вычислить удвоенное значение toes и квадрат toes.
 * Программа должна вывести все три значения, снабдив их соответствующими пояснениями.
 *
 * \return int
 */
int main(void)
{
    int toes;
    toes = 10;

    printf("Удвоение: %d\n", toes * 2);
    printf("Квадрат: %d\n", toes * toes);

    return 0;
}