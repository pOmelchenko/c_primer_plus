#include <stdio.h>

/**
 * @brief Упражнение по программированию 8.2
 *
 * @details Напишите программу, которая читает ввод как поток символов, пока не встретит <code>EOF</code>. Программа
 * должна выводить каждый введенный символ и его десятичный код ASCII. Следует отметить, что в кодировке ASCII символы,
 * предшествующие пробелу, являются непечатаемыми. Трактуйте их особым образом. Если непечатаемым символом является
 * символ новой строки или символ табуляции, выводите, соответственно, <code>\\n</code> или <code>\\t</code>.
 * В противном случае воспользуйтесь нотацией управляющих символов. Например, ASCII-код 1 — это комбинация <CTRL+A>,
 * которую можно отобразить как <code>^A</code>. Обратите внимание, что ASCII-код символа <code>A</code> представляет
 * собой значение <Ctrl+A> плюс 64. Аналогичная зависимость имеется и для других непечатаемых символов. Выводите по 10
 * пар в строке, кроме случая, когда встречается символ новой строки.
 *
 * @note Операционная система может иметь специальные интерпретации для некоторых управляющих символов и не допускать
 * их попадания в программу.
 *
 * @return int
 */
int main(void)
{
    char ch;
    int count = 1;

    while ((ch = getchar()) != EOF) {
        switch (ch) {
            case 0:
                printf("^@");
                break;
            case 1:
                printf("^A");
                break;
            case 2:
                printf("^B");
                break;
            case 3:
                printf("^C");
                break;
//            case 4: // EOF
//                printf("^D");
//                break;
            case 5:
                printf("^E");
                break;
            case 6:
                printf("^F");
                break;
            case 7:
                printf("^G");
                break;
            case 8:
                printf("^H");
                break;
            case 9:
                printf("^I");
                break;
            case 10:
                printf("^J");
                break;
            case 11:
                printf("^K");
                break;
            case 12:
                printf("^L");
                break;
            case 13:
                printf("^M");
                break;
            case 14:
                printf("^N");
                break;
            case 15:
                printf("^O");
                break;
            case 16:
                printf("^P");
                break;
            case 17:
                printf("^Q");
                break;
            case 18:
                printf("^R");
                break;
            case 19:
                printf("^S");
                break;
            case 20:
                printf("^T");
                break;
            case 21:
                printf("^U");
                break;
            case 22:
                printf("^V");
                break;
            case 23:
                printf("^W");
                break;
            case 24:
                printf("^X");
                break;
            case 25:
                printf("^Y");
                break;
            case 26:
                printf("^Z");
                break;
            case 27:
                printf("^[");
                break;
            case 28:
                printf("^\\");
                break;
            case 29:
                printf("^]");
                break;
            case 30:
                printf("^^");
                break;
            case 31:
                printf("^_");
                break;
            case 32:
                printf(" ");
                break;
            default:
                putchar(ch);
                break;
        }
        printf(" - %d ", ch);

        if (count % 10 == 0) {
            printf("\n");
        }

        count++;
    }

    printf("\n");

    return 0;
}
