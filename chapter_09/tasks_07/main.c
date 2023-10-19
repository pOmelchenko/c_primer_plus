#include <stdio.h>
#include <ctype.h>

/**
 * @brief Возвращает номер буквы в алфавите
 * @param ch Символ из stdout
 * @return
 */
int get_char_number(char ch);

/**
 * @brief Упражнение по программированию 9.7
 *
 * @details Напишите программу, которая читает символы из стандартного ввода вплоть до конца файла. Для каждого символа
 * программа должна сообщать, является ли он буквой. Если символ — буква, программа вдобавок должна сообщать ее
 * порядковый номер в алфавите. Например, буквы <code>c</code> и <code>C</code> будут иметь номер 3. Предусмотрите в
 * программе функцию, которая принимает символ в качестве аргумента и возвращает его порядковый номер в алфавите, если
 * он является буквой, и <code>-1</code> в противном случае.
 *
 * @return int
 */
int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            printf("%c - %d\n", ch, get_char_number(ch));
        } else {
            printf("%c - %d\n", ch, -1);
        }
        getchar();
    }

    return 0;
}

int get_char_number(char ch)
{
    return (int) tolower(ch) - 96;
}
