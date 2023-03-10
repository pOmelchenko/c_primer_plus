#include <stdio.h>
#include <string.h>

/**
 * @brief Упражнение по программированию 4.6
 *
 * @details Напишите программу, которая запрашивает имя пользователя и его фамилию. Сделайте так, чтобы она выводил
 * введенные имена в одной строке и количество символов в каждом слова в следующей строке. Выровняйте количество
 * символов по окончанию соответствующего имени, как показано ниже:
 * <pre>Иван Петров</pre>
 * <pre>   4      6</pre>
 * Затем сделайте так, чтобы программ выводила ту же самую информацию. но с количеством символов, выровненным по началу
 * каждого слова:
 * <pre>Иван Петров</pre>
 * <pre>4    6</pre>
 *
 * @return int
 */
int main(void)
{
    char first_name[65];
    char second_name[65];

    printf("Введите имя и фамилию: ");
    scanf("%s %s", first_name, second_name);

    printf("%s %s\n", first_name, second_name);
    printf("%*d %*d\n", strlen(first_name), strlen(first_name), strlen(second_name), strlen(second_name));

    printf("\n");

    printf("%s %s\n", first_name, second_name);
    printf("%-*d %-*d\n", strlen(first_name), strlen(first_name), strlen(second_name), strlen(second_name));

    return 0;
}
