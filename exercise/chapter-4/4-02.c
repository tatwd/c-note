#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char s[]);

int main()
{
    char s[10] = "123.45e-2";
    double result;

    result = atof(s);
    printf("%lf\n", result);

    return 0;
}

/**
 * s to float number
 */
double atof(char s[])
{
    double val, power;
    int i, sign, e, esign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    /* support scientific notation */
    if (s[i] == 'e' || s[i] == 'E')
        i++;
    esign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (e = 0; isdigit(s[i]); i++)
        e = 10 * e + (s[i] - '0');

    return (sign * val / power) * pow(10.0, esign * e);
}
