#include <stdio.h>

// 1 - Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321

int mirror(int n) {
    printf("%d", n%10);
    if(n/10 != 0)
        mirror(n/10);
}

int main() {
    mirror(123450);
}