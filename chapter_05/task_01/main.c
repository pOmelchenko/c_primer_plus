#include <stdio.h>

#define MIN_PER_HOUR 60

/**
 * @brief Упражнение по программированию 5.1
 *
 * @details Напишите программу, которая преобразует время в минутах в часы и минуты. Для значения <code>60</code>
 * создайте символическую константу посредством <code>#define</code> или <code>const</code>. Используйте цикл
 * <code>while</code>, чтобы обеспечить пользователю возможность повторного ввода значение и прекращения цикла, если
 * вводится значение времени, меньше или равное нулю.
 *
 * @return
 */
int main(void)
{
    int minutes;
    printf("Введите количество минут: ");
    scanf("%d", &minutes);

    while (minutes > 0) {
        printf("Вы ввели %d минут, что равно %d часов и %d минут.\n",
               minutes,
               minutes / MIN_PER_HOUR,
               minutes % MIN_PER_HOUR);
        printf("Если хотите произвести еще один замер, введите значение, которое будет больше 0.\n");
        printf("Введите количество минут: ");
        scanf("%d", &minutes);
    }

    printf("До свиданья!");

    return 0;
}