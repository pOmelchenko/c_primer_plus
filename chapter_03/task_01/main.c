#include <stdio.h>
#include <limits.h>
#include <float.h>

/**
 * @brief Упражнение по программированию 3.1
 *
 * @details Экспериментальным путем выясните, как ваша система обрабатывает переполнение при выполнении операции над
 * целыми числами и над числами с плавающей запятой, а так же потерю значимости при выполнении операций над числами
 * с плавающей запятой; т.е. напишите программу, в которой присутствуют такие проблемы. (для получения сведений
 * о наибольших и наименьших значениях просмотрите обсуждение <code>limits.h</code> и <code>float.h</code> в главе 4.)
 *
 * @return int
 */
int main(void)
{
    char ch_signed;
    unsigned char ch_unsigned;

    short sh_signed;
    unsigned short sh_unsigned;
    int i_signed;
    unsigned int i_unsigned;
    long l_signed;
    unsigned long l_unsigned;
    long long ll_signed;
    unsigned long long ll_unsigned;

    _Bool b;

    float f;
    double d;
    long double ld;

    char line_separator[81] = "================================================================================";

    {
        printf("char\n\tsize = %zd\n\tlimit min = %hd\n\tlimit max = %hd\n", sizeof(ch_signed), SCHAR_MIN, SCHAR_MAX);
        printf("unsigned char\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %hu\n", sizeof(ch_unsigned), 0, UCHAR_MAX);

        printf("short\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %d\n", sizeof(sh_signed), SHRT_MIN, SHRT_MAX);
        printf("unsigned short\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %d\n", sizeof(sh_unsigned), 0, USHRT_MAX);

        printf("int\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %d\n", sizeof(i_signed), INT_MIN, INT_MAX);
        printf("unsigned int\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %u\n", sizeof(i_unsigned), 0, UINT_MAX);

        printf("long\n\tsize = %zd\n\tlimit min = %ld\n\tlimit max = %ld\n", sizeof(l_signed), LONG_MIN, LONG_MAX);
        printf("unsigned long\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %lu\n", sizeof(l_unsigned), 0, ULONG_MAX);

        printf("long long\n\tsize = %zd\n\tlimit min = %lld\n\tlimit max = %lld\n", sizeof(ll_signed), LLONG_MIN, LLONG_MAX);
        printf("unsigned long long\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %llu\n", sizeof(ll_unsigned), 0, ULLONG_MAX);

        printf("_Bool\n\tsize = %zd\n\tlimit min = %d\n\tlimit max = %d\n", sizeof(b), 0, 1);

        printf("float\n\tsize = %zd\n\tlimit min = %f\n\tlimit max = %f\n", sizeof(f), FLT_MIN, FLT_MAX);
        printf("double\n\tsize = %zd\n\tlimit min = %f\n\tlimit max = %f\n", sizeof(d), DBL_MIN, DBL_MAX);
        printf("long double\n\tsize = %zd\n\tlimit min = %Lf\n\tlimit max = %Lf\n", sizeof(ld), LDBL_MIN, LDBL_MAX);
    }

    printf("\n%s\n\n", line_separator);

    {
        printf("overflow short:\n\tmin: %hd\n\tmax: %hd\n\tmax + 1: %hd\n", SHRT_MIN, SHRT_MAX, SHRT_MAX + 1);
        printf("overflow unsigned short:\n\tmin: %hd\n\tmax: %hu\n\tmax + 1: %hu\n", 0, USHRT_MAX, USHRT_MAX + 1);
        printf("overflow int:\n\tmin: %d\n\tmax: %d\n\tmax + 1: %d\n", INT_MIN, INT_MAX, INT_MAX + 1);
        printf("overflow unsigned int:\n\tmin: %u\n\tmax: %u\n\tmax + 1: %u\n", 0, UINT_MAX, UINT_MAX + 1);
        printf("overflow long:\n\tmin: %ld\n\tmax: %ld\n\tmax + 1: %ld\n", LONG_MIN, LONG_MAX, LONG_MAX + 1);
        printf("overflow unsigned long:\n\tmin: %u\n\tmax: %lu\n\tmax + 1: %lu\n", 0, ULONG_MAX, ULONG_MAX + 1);
        printf("overflow long long:\n\tmin: %lld\n\tmax: %lld\n\tmax + 1: %lld\n", LLONG_MIN, LLONG_MAX, LLONG_MAX + 1);
        printf("overflow unsigned long long:\n\tmin: %u\n\tmax: %llu\n\tmax + 1: %llu\n", 0, ULLONG_MAX, ULLONG_MAX + 1);
    }

    printf("\n%s\n\n", line_separator);

    {
        float a,b;

        b = 2.0e20 + 1.0;
        a = b - 2.0e20;

        printf("float: %f", a);
    }

    return 0;
}
