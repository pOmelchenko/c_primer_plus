#include <stdio.h>

/**
 * @brief Листинг 10.13
 *
 * @file ptr_ops.c
 *
 * @return int
 */
int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, * ptr2, * ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    // разыменование указателя и получения адреса указателя
    printf("значение указателя, разыменованный указатель, адрес указателя:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // сложение указателя
    ptr3 = ptr1 + 4;
    printf("\nсложение значения int с указателем:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));

    // инкрементирование указателя
    ptr1++;
    printf("\nзначение после выполнения операции ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // декрементирование указателя
    ptr2--;
    printf("\nзначение после выполнения операции ptr2--:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    // восстановление исходных значений
    --ptr1;
    ++ptr2;
    printf("\nвосстановление исходных значений указателей:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    // вычитание одного указателя из другого
    printf("\nвычитание одного указателя из другого:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

    // вычитание целого значения из указателя
    printf("\nвычитание из указателя значения типа int:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}
