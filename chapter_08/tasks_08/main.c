#include <stdio.h>

/**
 * @brief Вывод на экран меню с ожиданием выбора от пользователя
 *
 * @return
 */
char get_choice(void);

/**
 * @brief Получение одного символа от пользователя
 *
 * @return
 */
char get_first(void);

/**
 * @brief Получение числа от пользователя
 *
 * @return
 */
double get_number(void);

/**
 * @brief Упражнение по программированию 8.8
 *
 * @details Напишите программу, которая выводит на экран меню, предлагающее выбрать сложение, вычитание, умножение или
 * деление. После выбора программа должна запросить два числа и затем выполнить затребованную операцию. Программа должна
 * принимать только варианты, предлагаемые в меню. Для чисел должен использоваться тип <code>float</code> и программа
 * должна предоставлять пользователю возможность повторно вводить числа, если он введет нечисловые данные. В случае
 * деления программа должна предложить пользователю ввести другое значение, если он ввел для второго операнда значение
 * <code>0</code>. Выполнение такой программы должно иметь примерно такой вид:
 * <pre>
 * Выберите желаемую операцию:<br>
 * a. сложение            s. вычитание<br>
 * m. умножение           d. деление<br>
 * q. завершение<br>
 * <b>с</b><br>
 * Введите первое число: <b>22.4</b><br>
 * Введите второе число: <b>один</b><br>
 * один не является числом.<br>
 * Введите число, такое как 2.5, -1.78E8, или 3: <b>1</b><br>
 * 22.4 + 1 = 23.4<br>
 * a. сложение            s. вычитание<br>
 * m. умножение           d. деление<br>
 * q. завершение<br>
 * <b>д</b><br>
 * Введите первое число: <b>18.4</b><br>
 * Введите второе число: <b>0</b><br>
 * Введите число отличное от 0: <b>0.2</b><br>
 * 18.4 / 0.2 = 92<br>
 * a. сложение            s. вычитание<br>
 * m. умножение           d. деление<br>
 * q. завершение<br>
 * <b>з</b><br>
 * Программа завершена.<br>
 * </pre>
 *
 * @return int
 */
int main(void)
{
    int choice;
    double num_a, num_b;

    while ((choice = get_choice()) != 'q') {
        printf("Введите первое число: ");
        num_a = get_number();

        printf("Введите второе число: ");
        num_b = get_number();

        switch (choice) {
            case 'a':
                printf("%0.1f + %0.1f = %0.1f\n", num_a, num_b, num_a + num_b);
                break;
            case 's':
                printf("%0.1f - %0.1f = %0.1f\n", num_a, num_b, num_a - num_b);
                break;
            case 'm':
                printf("%0.1f * %0.1f = %0.1f\n", num_a, num_b, num_a * num_b);
                break;
            case 'd':
                if (0 == num_b) {
                    printf("Введите число отличное от 0: ");
                    num_b = get_number();
                }
                printf("%0.1f / %0.1f = %0.1f\n", num_a, num_b, num_a / num_b);
                break;
            default:
                break;
        }
    }

    printf("Программа завершена.\n");

    return 0;
}

char get_choice(void)
{
    char choice;

    printf("Выберите операцию из списка:\n");
    printf("a. сложение            s. вычитание\n");
    printf("m. умножение           d. деление\n");
    printf("q. завершение\n");

    choice = get_first();

    if (choice != 'a' && choice != 's' && choice != 'm' && choice != 'd' && choice != 'q') {
        printf("Выбран неверный вариант, попробуйте еще раз\n");
        choice = get_first();
    }

    return choice;
}

char get_first(void)
{
    char input;

    while ((input = getchar()) == ' ')
        continue;
    while (getchar() != '\n')
        continue;

    return input;
}

double get_number(void)
{
    double number;

    while (scanf("%lf", &number) != 1) {
        while(getchar() != '\n')
            continue;

        printf("Введите число, такое как 2.5, -1.78E8, или 3: ");
    }

    while(getchar() != '\n')
        continue;

    return number;
}
