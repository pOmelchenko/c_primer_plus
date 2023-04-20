#include <stdio.h>

/**
 * @brief Количество сантиметров в футе
 */
#define CM_PER_FUT 30.48f

/**
 * @brief Количество сантиметров в дюйме
 */
#define CM_PER_INCH 2.54f

/**
 * @brief Упражнение по программированию 5.4
 *
 * @details Напишите программу, которая запрашивает у пользователя ввод значения высоты в сантиметрах, после чего
 * отображает высоту в сантиметрах, а также в футах и дюймах. Должны быть разрешены дробные части сантиметров и дюймов.
 * Программ должна позволить пользователю продолжать ввод значений высоты до тех пор, пока не будет введено
 * неположительное значение. Вывод этой программы должен иметь следующий вид:
 * <pre>Введите высоту в сантиметрах: 182
 * 182.0 см = 5 футов, 11.7 дюймов
 * Введите высоту в сантиметрах (<=0 для выхода из программы): 168.7
 * 168.7 см = 5 футов, 6.4 дюймов
 * Введите высоту в сантиметрах (<=0 для выхода из программы): 0
 * Работа завершена</pre>
 *
 * @return int
 */
int main(void) {
    float cm;
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &cm);

    while (cm >= 0) {
        int fut = cm / CM_PER_FUT;
        float inch = (cm - (fut * CM_PER_FUT)) / CM_PER_INCH;
        printf("%.1f см = %d футов, %.1f дюймов\n", cm, fut, inch);
        printf("Введите высоту в сантиметрах (<=0 для выхода из программы): ");
        scanf("%f", &cm);
    }

    return 0;
}
