#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("Entre com o seu peso:");
    scanf("%f", &peso);
    printf("Entre com a sua altura:");
    scanf("%f", &altura);
    imc = peso/altura*altura;
    if (imc <= 18.5) {
        printf("\nAbaixo do peso");
    } else if (imc > 18.5 && imc < 25.0) {
        printf("\nSaudavel");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("\nPeso em excesso");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("\nObesidade Grau I");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("\nObesidade Grau II (severa)");
    } else if (imc >= 40.0) {
        printf("\nObesidade Grau III (Morbida)");
    }

    return 0;
}