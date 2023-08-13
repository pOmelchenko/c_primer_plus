#include <stdio.h>

#define PRICE_OF_ARTICHOKES 2.05
#define PRICE_OF_BEETS 1.15
#define PRICE_OF_CARROT 1.09

#define DISCOUNT_VALUE 5

/**
 * @brief Упражнение по программированию 7.11
 *
 * @details Компания ABC Main Order Grocery продает артишоки по цене $2.05 за фунт, свеклу по $1.15 за фунт и морковь по
 * $1.09 за фунт. До добавления затрат на доставку компания предоставляет скидку 5% на заказы на сумму до $100 и выше.
 * Затраты составляют $6.50 за доставку и обработку заказа весом в 5 фунтов или менее, $14.00 за обработку и доставку
 * заказа весом от 5 до 20 фунтов и $14.00 плюс $0.50 за каждый фунт для доставки заказа весом, превышающим 20 фунтов.
 * Напишите программу, которая использует оператор <code>switch</code> в цикле так, что в ответ на ввод <code>a</code>
 * пользователь получает возможность указать желаемый вес артишоков в фунтах; в ответ на ввод <code>b</code> — вес
 * свеклы в фунтах; в ответ на ввод <code>c</code> — вес моркови в фунтах; а в ответ на <code>q</code> — завершить
 * процесс заказа. Программа должна вести учет сумм нарастающим итогом. То есть если пользователь вводит 4 фунта свеклы
 * и позже вводит еще 5 фунтов свеклы, программа должна сообщать о заказе 9 фунтов свеклы. Затем программа должна
 * вычислить общие затраты, скидку, если есть, расходы на доставку и полную сумму заказа. Далее программа должна
 * отобразить всю информацию о покупке: стоимость фунта товара, количество заказанных фунтов, стоимость каждого
 * заказанного вида овощей, общую стоимость заказа, скидку (если есть), затраты на доставку и итоговую сумму заказа с
 * учетом всех затрат.
 *
 * @return int
 */
int main(void)
{
    char select;

    float weight_of_artichokes = 0.0,
          weight_of_beets = 0.0,
          weight_of_carrot = 0.0,
          weight = 0.0,
          summary_weight = 0.0,
          summary_price_of_artichokes = 0.0,
          summary_price_of_beets = 0.0,
          summary_price_of_carrot = 0.0,
          summary_price = 0.0,
          discount = 0.0,
          delivery_price = 0.0,
          final_price = 0.0;

    printf("Добро пожаловать в ABC Main Order Grocery!\n");
    printf("\n");
    printf("У нас вы можете приобрести:\n");
    printf("a) артишоки — $%.2f за фунт\n", PRICE_OF_ARTICHOKES);
    printf("b) свеклу — $%.2f за фунт\n", PRICE_OF_BEETS);
    printf("c) морковь — $%.2f за фунт\n", PRICE_OF_CARROT);
    printf("\n");
    printf("Выберите товар который вы хотите добавить в корзину (или введите q чтобы закончить заказ): ");

    while ((select = getchar())) {
        if ('q' == select) {
            break;
        }

        switch (select) {
            case 'a':
                printf("Укажите вес артишоков: ");
                break;
            case 'b':
                printf("Укажите вес свеклы: ");
                break;
            case 'c':
                printf("Укажите вес моркови: ");
                break;
            default:
                printf("Такого товара не найдено, попробуйте еще раз: ");
                continue;
        }

        scanf("%f", &weight);

        switch (select) {
            case 'a':
                weight_of_artichokes += weight;
                summary_price_of_artichokes += weight_of_artichokes * PRICE_OF_ARTICHOKES;
                printf("Добавлено %0.2f фунта(-ов) артишоков\n", weight);
                break;
            case 'b':
                weight_of_beets += weight;
                summary_price_of_beets += weight_of_beets * PRICE_OF_BEETS;
                printf("Добавлено %0.2f фунта(-ов) свеклы\n", weight);
                break;
            case 'c':
                weight_of_carrot += weight;
                summary_price_of_carrot += weight_of_carrot * PRICE_OF_CARROT;
                printf("Добавлено %0.2f фунта(-ов) моркови\n", weight);
                break;
        }

        printf("Если вы хотите добавить что-то еще, выберите товар: ");
    }

    printf("Чек\n");
    printf("артишоков\n\tвесом: %0.2f фунтов\n\tна сумму: $%0.2f\n\tпо $%0.2f за фунт\n",
           weight_of_artichokes,
           summary_price_of_artichokes,
           PRICE_OF_ARTICHOKES);
    printf("свеклы\n\tвесом: %0.2f фунтов\n\tна сумму: $%0.2f\n\tпо $%0.2f за фунт\n",
           weight_of_beets,
           summary_price_of_beets,
           PRICE_OF_BEETS);
    printf("моркови\n\tвесом: %0.2f фунтов\n\tна сумму: $%0.2f\n\tпо $%0.2f за фунт\n",
           weight_of_carrot,
           summary_price_of_carrot,
           PRICE_OF_CARROT);

    summary_weight = weight_of_artichokes + weight_of_beets + weight_of_carrot;
    summary_price = summary_price_of_artichokes + summary_price_of_beets + summary_price_of_carrot;

    printf("ИТОГО\n\tобщий вес: %0.2f фунтов\n\tна сумму: $%0.2f\n",
           summary_weight,
           summary_price);

    if (summary_price <= 100) {
        discount = summary_price * DISCOUNT_VALUE / 100;
        printf("\tскидка %d%% суммой: $%0.2f\n", DISCOUNT_VALUE, discount);
    }

    if (summary_weight <= 5)
        delivery_price = 6.50;
    else if (summary_weight > 5 && summary_weight <= 20)
        delivery_price = 14.00;
    else
        delivery_price = 0.50 * summary_weight;

    printf("\tстоимость доставки: %.2f\n", delivery_price);

    final_price = summary_price - discount + delivery_price;

    printf("\nК ОПЛАТЕ:\n\t$%.2f", final_price);

    return 0;
}
