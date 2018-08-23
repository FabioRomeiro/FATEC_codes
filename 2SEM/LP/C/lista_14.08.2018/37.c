#include <stdio.h>

int main() {
        float valor;
    int horas_total, minutos_total, horas_final,minutos_final, hora_entrada, minuto_entrada, hora_saida, minuto_saida;

    printf("Entre com a hora e o minuto de entrada: \n");
    scanf("%d", &hora_entrada);
    printf(" ");
    scanf("%d", &minuto_entrada);
    printf("Entre com a hora e o minuto de saida: \n");
    scanf("%d", &hora_saida);
    printf(" ");
    scanf("%d", &minuto_saida);

    if (hora_entrada > hora_saida) {
        hora_saida = hora_saida + 24;
    }
    if (minuto_entrada > minuto_saida) {
        minuto_saida = minuto_saida + 60;
        hora_saida = hora_saida - 1;
    }
    horas_final = minuto_saida - minuto_entrada;
    horas_final = hora_saida - hora_entrada;

    if (horas_final >= 1){
        if (horas_final > 1){
            printf("O carro ficou estacionado durante %d horas e %d minutos.", horas_final, horas_final);
        } else {
            printf("O carro ficou estacionado durante %d horas.", horas_final);
        }
    } else {
        printf("O carro ficou estacionado durante %d minutos.", horas_final);
    }

    minutos_total = (int)((horas_final * 60) + horas_final);

    if (minutos_total <= 120){
        if (minutos_total <= 60){
            valor = 1.00;
            printf("Preço total: R$%.2f.", valor);
        } else {
            valor = 2;
            printf("Preço total: R$%.2f.", valor);
        }
    } else if (minutos_total <= 240){
        if (minutos_total <= 180){
            valor = 2 + 1.40;
            printf("Preço total: R$%.2f.", valor);
        } else {
            valor = 2 + (1.40 * 2);
            printf("Preço total: R$%.2f.", valor);
        }
    } else {
        horas_total = (int)(minutos_total / 60);
        valor = 4.40 + ((horas_total - 4) * 2);
        printf("Preço total: R$%.2f.",valor);
    }


    return 0;

}