#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * @brief Упражнение по программированию 8.4
 *
 * @details Напишите программу, которая читает ввод как поток символов, пока не встретит <code>EOF</code>. Программа
 * должна сообщать среднее количество букв в словах. Не считайте пробельные символы в словах буквами. На самом деле, так
 * же не должны учитываться и знаки препинания, но в данном упражнении об этом можно не беспокоиться. (Для учета знаков
 * препинания можно воспользоваться функцией <code>ispunct()</code> из семейства <code>ctype.h</code>.)
 *
 * @return int
 */
int main(void)
{
    char ch;
    int words = 0;
    int charsInWords = 0;
    bool word = false;
    bool lastChIsAlpha = false;

    while ((ch = getchar()) != EOF) {
        if (word) {
            if (isalpha(ch)) {
                word = true;
                charsInWords++;
                lastChIsAlpha = true;
            } else {
                word = false;
                words++;
            }
        } else {
            if (isalpha(ch)) {
                word = true;
                charsInWords++;
                lastChIsAlpha = true;
            }
        }
    }

    if (ch == EOF && word) {
        words++;
    }

    printf(
        "Слов: %d\nВсего символов: %d\nСреднне количество символов в словах: %d\n",
        words,
        charsInWords,
        charsInWords / words
    );

    return 0;
}
