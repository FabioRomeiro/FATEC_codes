#include <stdio.h>

int main()
{
    float salario, salario_reajustado;
    int anos;

    printf("Entre com o seu salario:");
    scanf("%f", &salario);
    printf("Entre com o tempo que esta na empres (em anos):");
    scanf("%d", &anos);

    if (salario <= 500.0) {
        if (anos < 1){
            salario_reajustado = salario + (salario * 0.25);
        } else if (anos >= 1 && anos <=3) {
            salario_reajustado = salario + (salario * 0.25) + 100;
        } else if (anos >= 4 && anos <= 6) {
            salario_reajustado = salario + (salario * 0.25) + 200;
        } else if (anos >= 7 && anos <= 10) {
            salario_reajustado = salario + (salario * 0.25) + 300;
        } else if (anos > 10) {
            salario_reajustado = salario + 500;
        }
    }
    else if (salario > 500.0 && salario <= 1000.0) {
        if (anos < 1){
            salario_reajustado = salario + (salario * 0.20);
        } else if (anos >= 1 && anos <=3) {
            salario_reajustado = salario + (salario * 0.20) + 100;
        } else if (anos >= 4 && anos <= 6) {
            salario_reajustado = salario + (salario * 0.20) + 200;
        } else if (anos >= 7 && anos <= 10) {
            salario_reajustado = salario + (salario * 0.20) + 300;
        } else if (anos > 10) {
            salario_reajustado = salario + 500;
        }
    }
    else if (salario > 1000.0 && salario <= 1500.0) {
        if (anos < 1){
            salario_reajustado = salario + (salario * 0.15);
        } else if (anos >= 1 && anos <=3) {
            salario_reajustado = salario + (salario * 0.15) + 100;
        } else if (anos >= 4 && anos <= 6) {
            salario_reajustado = salario + (salario * 0.15) + 200;
        } else if (anos >= 7 && anos <= 10) {
            salario_reajustado = salario + (salario * 0.15) + 300;
        } else if (anos > 10) {
            salario_reajustado = salario + 500;
        }
    }
    else if (salario > 1500.0 && salario <= 2000.0) {
        if (anos < 1){
            salario_reajustado = salario + (salario * 0.10);
        } else if (anos >= 1 && anos <=3) {
            salario_reajustado = salario + (salario * 0.10) + 100;
        } else if (anos >= 4 && anos <= 6) {
            salario_reajustado = salario + (salario * 0.10) + 200;
        } else if (anos >= 7 && anos <= 10) {
            salario_reajustado = salario + (salario * 0.10) + 300;
        } else if (anos > 10) {
            salario_reajustado = salario + 500;
        }
    }
    else if (salario > 2000.0) {
        if (anos < 1){
            salario_reajustado = salario;
        } else if (anos >= 1 && anos <=3) {
            salario_reajustado = salario + 100;
        } else if (anos >= 4 && anos <= 6) {
            salario_reajustado = salario + 200;
        } else if (anos >= 7 && anos <= 10) {
            salario_reajustado = salario + 300;
        } else if (anos > 10) {
            salario_reajustado = salario + 500;
        }
    }

    printf((salario_reajustado == salario) ? "\nSEM DIREITO A AUMENTO" : "\n%.2f", salario_reajustado);

    return 0;
}