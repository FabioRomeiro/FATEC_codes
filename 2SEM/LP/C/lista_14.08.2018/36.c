#include <stdio.h>

int main() {
    float valor, comissao;

    printf("Entre com o valor da venda:");
    scanf("%f", &valor);
    
    if (valor >= 100000.0) {
     comissao = 700.0 + (valor * 0.16);
    } else if (valor >= 80000.0 && valor < 100000.0) {
     comissao = 650.0 + (valor * 0.14);
    } else if (valor >= 60000.0 && valor < 80000.0) {
     comissao = 600.0 + (valor * 0.14);
    } else if (valor >= 40000.0 && valor < 60000.0) {
     comissao = 550.0 + (valor * 0.14);
    } else if (valor >= 20000.0 && valor < 40000.0) {
     comissao = 500.0 + (valor * 0.14);
    } else if (valor < 20000.0) {
     comissao = 400.0 + (valor * 0.14);
    }

    printf("Comissao: %.2f", comissao);
    
    return 0;
}