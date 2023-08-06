#include <stdio.h>

/**
 * @brief Упражнение по программированию 7.6
 *
 * @details Напишите программу, которая читает входные данные, пока не встретит символ <code>#</code>,
 * и сообщает количество вхождений последовательности <code>ei</code>.
 * 
 * @note Программа должна "запоминать" предыдущий символ, а также текущий символ. Проверьте ее на входной
 * последовательности вроде "Receive your eieio award#".
 *
 * @return int
 */
int main(void)
{
    char last, prew = '\0';
    int ei_count = 0;

    while ((last = getchar()) != '#') {
        if ('e' == prew && 'i' == last) {
            ei_count++;
        }

        prew = last;
    }

    printf("'ei' встретилось %d раз", ei_count);

    return 0;
}
