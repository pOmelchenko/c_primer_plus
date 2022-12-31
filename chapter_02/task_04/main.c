#include <stdio.h>

void jolly(void);
void deny(void);

/**
 * \brief Напишите программу, которая производит следующий вывод:
 *
 *  Он веселый молодец!
 *  Он веселый молодец!
 *  Он веселый молодец!
 *  Никто не может это отрицать!
 *
 * Вдобавок к функции main() в программе должны использоваться две определенные пользователем функции: jolly(),
 * которая выводит сообщение "Он веселый молодец!" один раз, и deny(), выводящая сообщение в последней строке.
 *
 * \return int
 */
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("Он веселый молодец!\n");
}

void deny(void)
{
    printf("Никто не может это отрицать!\n");
}
