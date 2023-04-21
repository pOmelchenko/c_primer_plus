#include <stdio.h>

/**
 * @file print2.c
 *
 * @brief Дополнительные свойства функции printf()
 *
 * @return int
 */
int main(void)
{
    unsigned int un = 3000000000; /* система с 32-битным типом int */
    short end = 200; /* и 16-битным типом short */
    long big = 65537;
    long long verybig = 12345678908642llu;
    printf("un = %u, но не %d\n", un, un);
    printf("end = %hd и %d\n", end, end);
    printf("big = %ld, но не %hd\n", big, big);
    printf("verybig = %lld, но не %ld\n", verybig, verybig);
    return 0;
}
