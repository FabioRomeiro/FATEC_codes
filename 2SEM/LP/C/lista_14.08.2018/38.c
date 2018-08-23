#include <math.h>
#include <stdio.h>

int main()
{
    int dia, mes, ano, valido = 0;

    printf("Entre com o dia:\n");
    scanf("%d", &dia);
    printf("Entre com o mes:\n");
    scanf("%d", &mes);
    printf("Entre com o ano:\n");
    scanf("%d", &ano);

    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12))
    {
        if ((dia == 29 && mes == 2) && ((ano % 4) == 0))
            valido = 1;
        if (dia <= 28 && mes == 2)
            valido = 1;
        if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
            valido = 1;

        if ((dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
        {
            valido = 1;
        }
        else
        {
            valido = 0;
        }
    }
    else
    {
        valido = 0;
    }

    if (valido)
    {
        printf("\nDATA VALIDA\n");
    }
    else
    {
        printf("\nDATA INVALIDA\n");
    }

    return 0;
}