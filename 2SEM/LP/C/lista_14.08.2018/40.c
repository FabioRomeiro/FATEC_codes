#include <stdio.h>

int main()
{
    float custo_fabrica, custo_consumidor;
    int anos;

    printf("Entre com o custo de fabrica:");
    scanf("%f", &custo_fabrica);
    
    if (custo_fabrica <= 12000.00) {
        custo_consumidor = custo_fabrica + (custo_fabrica * 0.05);
    } else if (custo_fabrica > 12000.00 && custo_fabrica <= 25000.00) {
        custo_consumidor = custo_fabrica + (custo_fabrica * 0.10) + (custo_fabrica * 0.15);
    } else if (custo_fabrica > 14000.00) {
        custo_consumidor = custo_fabrica + (custo_fabrica * 0.15) + (custo_fabrica * 0.20);
    }
    
    printf("Custo para o consumidor = %.2f", custo_consumidor);

    return 0;
}