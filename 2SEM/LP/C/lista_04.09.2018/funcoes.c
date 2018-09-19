#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "funcoes.h"

// 1
void multiplos_de_3() {
  int qtd_multiplos, numero = 1;
  printf("Primeiros 5 multiplos de 3: ");
  while(qtd_multiplos < 5) {
    if (numero%3==0) {
      qtd_multiplos++;
      printf("%d ", numero);
    }
    numero++;
  }
}

//2
void um_a_cem() {
  int i,j=1,k=1;
  printf("\nFOR: \n");
  for(i = 1; i<=100; i++) {
    printf("%d ", i);
  }

  printf("\nWHILE: \n");
  while (j <= 100) {
    printf("%d ", j);
    j++;
  }

  printf("\nDO WHILE: \n");
  do {
    printf("%d ", k);
    k++;
  } while(k<=100);

}

//3
void contagem_regressiva() {
  int j=10;
  while (j >= 0) {
    printf("%d\n", j);
    j--;
  }
  printf("FIM!");
}

//4
void mil_em_mil() {
  int j=0;
  while (j <= 100000) {
    printf("%d ", j);
    j+=1000;
  }
}

//5
void soma_tudo() {
  float valor, soma=0.0;
  for (int i = 0; i < 10; i++) {
    printf("Entre com um numero: ");
    scanf("%f", &valor);
    soma += valor;
  }
  printf("Soma de tudo: %.2f\n", soma);
}

//6
void media_inteiros() {
  int valor, soma;
  float media;

  for (int i = 0; i < 10; i++) {
    printf("Entre com um numero: ");
    scanf("%d", &valor);
    soma += valor;
  }
  media = soma/10.0;
  printf("Media de tudo: %.2f\n", media);
}

//7
void media_inteiros_positivos() {
  int valor, soma, i=0;
  float media;

  while (i<10) {
    printf("Entre com um numero: ");
    scanf("%d", &valor);
    if (valor > 0) {
      soma += valor;
      i++;
    }
  }
  media = soma/10.0;
  printf("Media de tudo: %.2f\n", media);
}

//8
void maior_menor_valor() {
  float maior=0, menor=0, valor;

  for (int i = 0; i<10; i++) {
    printf("Entre com um numero: ");
    scanf("%f", &valor);
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
  }
  printf("Maior numero: %.2f\nMenor numero: %.2f\n", maior, menor);
}

//9
void impares_naturais() {
  int n;
  printf("Entre com um numero: ");
  scanf("%d", &n);
  printf("\n");
  for (int i = 0; i <= n; i++) {
    if (i%2!=0) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

//10
void soma_primeiros_50_pares() {
  int soma=0, pares = 0, n = 0;
  while (n <= 100 && pares <=50) {
    if (n%2==0) {
      soma += n;
      pares++;
    }
    n++;
  }
  printf("Soma dos 50 primeiros pares: %d\n", soma);
}

//11
void naturais_ate_n() {
  int n;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = 0; i <= n; i++) {
    printf("%d ", i);
  }
  printf("\n");
}

//12
void naturais_de_n_a_zero() {
  int n;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = n; i >= 0; i--) {
    printf("%d ", i);
  }
  printf("\n");
}

//13
void naturais_pares_ate_n() {
  int n;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = 0; i <= n; i++) {
    if(i%2==0) printf("%d ", i);
  }
  printf("\n");
}

//14
void naturais_par_de_n_a_zero() {
  int n;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = n; i >= 0; i--) {
    if(i%2==0) printf("%d ", i);
  }
  printf("\n");
}

//15
void naturais_impares_ate_n() {
  int n;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = 0; i <= n; i++) {
    if(i%2!=0) printf("%d ", i);
  }
  printf("\n");
}

//16
void naturais_impar_de_n_a_zero() {
  int n;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = n; i >= 0; i--) {
    if(i%2!=0) printf("%d ", i);
  }
  printf("\n");
}

//17
void soma_naturais_ate_n() {
  int n, soma = 0;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n);
  printf("\n");
  for (int i = 0; i <= n; i++) {
    soma += i;
  }
  printf("Soma de tudo: %d\n", soma);
}

//18
void maior_apareceu_x() {
  float maior, valor;
  int n, vezes = 0;
  printf("Quantos numeros serão pedidos?\n");
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    printf("\nEntre com um numero: ");
    scanf("%f", &valor);
    if(i == 0){
      maior = valor;
      vezes++;
    } else if (valor > maior) {
      maior = valor;
      vezes = 1;
    } else if (valor == maior) {
      vezes++;
    }
  }
  printf("\nMaior numero: %.2f\nEle apareceu %d\n", maior, vezes);
}

//19
void algarismos_aleatorios() {
  srand(time(0));

  int num = (rand() % (999-100+1)) + 100;
  char num_str[2];

  sprintf(num_str,"%d",num);

  for (int i = 0; i <= sizeof(num_str); i++) {
    printf("%c\n", num_str[i]);
  }
}

//20
void dados_de_numeros() {
  int valor = 0, pares = 0, qtd = 0;

  while (valor != 1000) {
    printf("Digite um valor (digite 1000 para parar):\n");
    scanf("%d", &valor);
    if (valor == 1000) break;
    if (valor%2==0) pares++;
    qtd++;
  }
  printf("Foram lidos %d numeros, desses, %d sao pares\n", qtd, pares);
}

//21
void soma_multiplica_determinado() {
  int n1,n2, maior, menor, soma = 0, multiplicacao = 1;
  printf("Entre com um numero inteiro positivo:\n");
  scanf("%d", &n1);
  printf("Entre com outro numero inteiro positivo:\n");
  scanf("%d", &n2);
  printf("\n");

  if (n1>n2) {
    maior = n1;
    menor = n2;
  } else {
    maior = n2;
    menor = n1;
  }

  for (int i = menor; i <= maior; i++) {
    if(i%2==0) soma += i;
    else multiplicacao *= i;
  }
  printf("\nSoma dos pares: %d\nMultiplicacao dos impares: %d", soma, multiplicacao);
  printf("\n");
}

//22
void notas_infinitas() {
  int valor = 10, soma = 0, qtd=0;
  float media;

  while (valor >= 10 && valor <= 20) {
    printf("Digite sua nota:\n");
    scanf("%d", &valor);
    if (valor < 10 && valor > 20) break;
    soma += valor;
    qtd++;
    media = soma/qtd;
    printf("\nSua média ate agora: %.2f\n", media);
  }
  printf("\nMédia final: %.2f\n", media);
}

//23
void os_divisores() {
  int valor;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  printf("\nDIVISORES:\n");
  for (int i = 1; i < valor; i++) {
    if (valor%i==0) printf("%d ", i);
  }
  printf("\n");
}

//24
void soma_dos_divisores() {
  int valor, soma = 0;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  for (int i = 1; i < valor; i++) {
    if (valor%i==0) soma += i;
  }
  printf("\nSoma dos divisores: %d\n", soma);
}

//25
void soma_multiplos_de_35_ate_1000() {
  int soma = 0;

  for (int i = 0; i <= 1000; i++) {
    if (i&3==0 || i%5==0) soma += i;
  }
  printf("Soma dos multiplos de 3 e 5 até 1000: %d\n", soma);
}

//26
void primeiro_multiplo_de_XYZ() {
  int valor;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  printf("Primeiro numero multiplo de 11, 13 ou 17: ");
  for (int i = 1; i <= valor; i++) {
    if (i&11==0 || i&13==0 || i&17==0) {
      printf("%d\n", i);
      break;
    }
  }
}

//27
void media_harmonica() {
  int valor;
  float harmonica = 0;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  for (int i = 1; i <= valor; i++) {
    harmonica += 1/i;
  }
  printf("Media Harmonica: %.2f\n", harmonica);
}

//28
void valor_de_E() {
  int valor;
  float e = 1;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  for (int i = 0; i <= valor; i++) {
    e += 1/exp(i);
  }
  printf("E = %.2f", e);
}

//29
void valor_de_S() {
  int valor;
  float s = 0;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  for (int i = 0; i <= valor; i++) {
    if(i%2==0) s += 1/exp(i);
  }
  printf("S = %.2f", s);
}

//30
void valor_de_sequencias() {
  int valor, s1 = 0, s2 = 0, s3 = 0;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &valor);

  for (int i = 1; i <= valor; i++) {
    s1 += valor;
  }
  for (int i = 1; i <= (valor*2)-1; i++) {
    if(i%2==0) s2 -= valor;
    else s2 += valor;
  }
  for (int i = 1; i <= (valor*2)-1; i+=2) {
    s3 += valor;
  }
  printf("Sequencia 1 = %d\nSequencia 2 = %d\nSequencia 3 = %d", s1,s2,s3);
}

//31
void valor_da_sequencia_S() {
  int s = 0, numerador = 1;

  for (int i = 1; i < 100; i++) {
    s += i / numerador;
    numerador += 2;
  }
  printf("\n Valor da sequencia: %d", s);
}

//32
void dois_dados() {
  srand(time(0));

  int d1 = (rand() % (6-1+1)) + 1;
  int d2 = (rand() % (6-1+1)) + 1;
  char sinal = '$';
  if (d1 > d2) sinal='>';
  else if (d1 < d2) sinal = '<';
  else if (d1 == d2) sinal = '=';

  printf("%d %c %d\n", d1,sinal,d2);
}

//33
void primeiros_naturais_multiplos_ij() {
  int n,i,j;

  printf("\nDigite um numero inteiro positivo maior que 0:\n");
  scanf("%d", &n);
  printf("\nDigite um numero inteiro positivo maior que 0 como primeiro divisor:\n");
  scanf("%d", &i);
  printf("\nDigite um numero inteiro positivo maior que 0 como segundo divisor:\n");
  scanf("%d", &j);
  if (n == 0) return;

  printf("\nOs multiplos: ");
  for (int k = 0; k < n; k++) {
    if (i%k == 0 || j%k == 0) printf("%d ", k);
  }
}

//34
void menos_numero_divisivel() {
  int i = 1, menor_multiplo;
  int divisivel_por_todos = 0;

  while (!divisivel_por_todos) {
    for (int k = 1; k <= 20; k++) {
      if (i%k!=0) break;
      if(k==20) {
        divisivel_por_todos = 1;
        menor_multiplo = k;
      }
    }
    i++;
  }

  printf("Menor numero divisivel por todos os numeros de 1 a 20: %d\n", menor_multiplo);
}

//35
void soma_impares_x_y() {
  int x,y;

  printf("\nDigite um valor minimo:\n");
  scanf("%d", &x);
  printf("\nDigite um valor maximo:\n");
  scanf("%d", &y);

  if (x>y) {
    printf("\nVALORES INVALIDOS!\n");
    return;
  }
  printf("\nOs impares: ");
  for (int k = x; k <= y; k++) {
    if (k%2!=0) printf("%d ", k);
  }
}

//36
void soma_dos_qd_qd_da_soma() {
  int soma_dos_quadrado = 0, soma = 0;
  for (int k = 1; k <= 100; k++) {
    soma += k;
    soma_dos_quadrado += (k*k);
  }
  printf("\nDiferença entre a soma dos quadrados e o quadrado da soma de 1 a 100:\n%d", (soma*soma)-soma_dos_quadrado);
}

//37
void matemagica() {
  char teste[4];
  for (int k = 1000; k <= 9999; k++) {
    printf("\nNumeros com a coincidencia de a soma dos pares de digitos ao quadrado ser igual ao numero em si: ");
    char grp[4];
    sprintf(grp,"%d",k);

    char grp1[2] = {grp[0],grp[1]};
    char grp2[2] = {grp[2],grp[3]};

    if (pow((atoi(grp1)+atoi(grp2)),2)==k) printf("%d ",k);
  }
  printf("\n");
}

//38
void termo_pitagorico()
{
    const int sum = 1000;
    int a;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c )
               printf("a=%d, b=%d, c=%d\n",a,b,c);
        }
    }
}

//39
void area_do_triangulo() {
  float base, altura;
  printf("Entre com a base do triangulo em metros:\n");
  scanf("%f", &base);
  printf("Entre com a altura do triangulo em metros:\n");
  scanf("%f", &altura);

  if (base <= 0.0 || altura <= 0) {
      printf("DADOS INVALIDOS\n");
      return;
  }
  printf("Area do triangulo: %.2fm2\n", (base*altura)/2);
}

//40
void maior_menor_valor_2() {
  float maior=0, menor=0, valor = 0;

  while (valor >= 0) {
    printf("Entre com um numero: ");
    scanf("%f", &valor);
    if (valor < 0) break;

    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
  }
  printf("Maior numero: %.2f\nMenor numero: %.2f\n", maior, menor);
}

//41
void calculo_resistencia() {
  float r1, r2;

  while (1) {
    printf("Entre com o valor de R1: ");
    scanf("%f", &r1);
    printf("Entre com o valor de R2: ");
    scanf("%f", &r2);

    if (r1 == 0.0 || r2 == 0.0) break;
    printf("Valor da resistencia: %.2f\n", (r1*r2)/(r1+r2));
  }
}

//42
void qdr_cub_raiz() {
  float valor;

  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);

    if (valor <= 0.0) break;
    printf("Quadrado: %.2f\nCubo: %.2f\nRaiz Quadrada: %.2f\n", pow(valor,2),pow(valor,3), sqrt(valor));
  }
}

//43
void media_idades() {
  int idade, soma = 0, qtd = 0;

  while (1) {
    printf("Entre com uma idade: ");
    scanf("%d", &idade);

    if (idade == 0) break;
    soma += idade;
    qtd++;
  }
  printf("Media das idades: %.2f\n", (soma/(float)qtd));
}

//44
void fibonacci() {
  int a=1,b=1,x=0,n;

    printf("Entre com o limite do fibonacci: ");
    scanf("%d", &n);

    if(n==1) x=a;
    if(n==2) x=b;
    printf("%d %d ", a,b);
    while(x <= n) {
      x=a+b;
      a=b;
      b=x;
      printf("%d ", x);
    }
}

//45
void conversao() {
    int op;
    while (1) {
      float valor;
      printf("\nO que deseja fazer:\n[1] Converter de km/h para m/s\n[2] Converter de m/s para km/h\n[3] Sair\nEscolha: ");
      scanf("%d", &op);
      switch (op) {
        case 1: printf("\nEntre com o valor: ");
                scanf("%f", &valor);
                printf("\nIsso equivale a %.2fm/s", valor/3.6);
                break;
        case 2: printf("\nEntre com o valor: ");
                scanf("%f", &valor);
                printf("\nIsso equivale a %.2fkm/h\n\n", valor*3.6);
                break;
        default: break;
      }
      if (op==3) break;
    }
}

//46
int pede_por_palpite(int max, int numero_secreto, int ultimo_chute) {
  int palpite;
  if (ultimo_chute != -1) printf("Chutou %s\n", (ultimo_chute > numero_secreto) ? "ALTO " : "BAIXO " );

  printf("De seu palpite, lembre: Entre 0 e %d\n", max);
  scanf("%d", &palpite);
  printf("\n\n");
  return palpite;
}
void adivinhacao() {
  int palpite = -1;

  srand(time(0));
  int numero_secreto = rand() % (1000 + 1 - 0) + 0;

  while (1) {
    palpite = pede_por_palpite(1000, numero_secreto, palpite);

    if (palpite == numero_secreto) break;
  }
}

// 47
void pede_numero(int *n1, int *n2){
    printf("Entre com o primeiro número: ");
    scanf("%d", n1);

    printf("Entre com o segundo numero: ");
    scanf("%d", n2);
}
void calculadora() {
    char op = 'x';
    int num1, num2;

    while (op != '5') {
        printf("[ 1 ] Adição\n");
        printf("[ 2 ] Subtração\n");
        printf("[ 3 ] Multplicação\n");
        printf("[ 4 ] Divisão\n");
        printf("[ 5 ] Sair");
        printf("Opção: ");
        op = getche();

        printf("\n\n");


        switch (op) {
            case '1':
                pede_numero(&num1, &num2);
                printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
                break;

            case '2':
                pede_numero(&num1, &num2);
                printf("%d - %d = %d\n\n", num1, num2, num1 - num2);
                break;

            case '3':
                pede_numero(&num1, &num2);
                printf("%d x %d = %d\n\n", num1, num2, num1 * num2);
                break;

            case '4':
                pede_numero(&num1, &num2);
                printf("%d / %d = %d\n\n", num1, num2, num1 / num2);
                break;

            case '5':
                printf("Fim do programa\n");
                break;

            default:
                printf("Opção inválida.\n\n");
        }
    }
}

// 48
void fibonacci_soma() {
    int  t1=0, t2=1, t3=0;
    int  soma = 2;

    while (t3 < 4000000){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        soma += t3;
    }

    printf("A soma dos termos é: %d", soma);
}

// 49
void carlos() {
    float Sal_Joao, Sal_Carlos, Rend_Carlos, Rend_Joao;
    int meses = 0;

    printf("Salário do Carlos: ");
    scanf("%f", &Sal_Carlos);

    Sal_Joao = Sal_Carlos / 3;

    Rend_Carlos = Sal_Carlos / (100 * 0.02);
    Rend_Joao = Sal_Joao / (100 * 0.05);

    while (Rend_Joao < Rend_Carlos) {
        Rend_Carlos *= meses;
        Rend_Joao *= meses;
        meses ++;
        printf("%d", meses);
    }

    printf("Para igualar o valor, João levou %d meses", meses);
}

// 50
void chico_e_ze() {
    float Chico = 1.50, Ze = 1.10;
    int anos = 0;

    while (Chico > Ze) {
        Chico += 0.2;
        Ze += 0.3;
        anos++;
    }

    printf("Levará %d anos para que Zé chegue a altura de Chico.\n", anos);
}

// 51
void aumento_salarial() {
    float aumento = 1.5;
    double salario = 2000;
    int  ano = 1995;

    while (ano < 2018) {
        salario += (aumento + 100) / 100 ;
        aumento *= 2;
        ano ++;

    }
    printf("%.2f", salario);

}

// 52
void saque_bancario() {
    int A_Sacar, *notas;

    notas = (int*) calloc (7, sizeof(int));

    printf("Quanto deseja sacar? ");
    scanf("%d", &A_Sacar);

    printf("\n");

    while (A_Sacar - 100 >= 0) {
            notas[0] ++;
            A_Sacar -= 100;
    }
    if (notas[0] > 0) printf("%d nota(s) de 100\n", notas[0]);

    while (A_Sacar - 50 >= 0) {
        notas[1] ++;
        A_Sacar -= 50;
    }
    if (notas[1] > 0) printf("%d nota(s) de 50\n", notas[1]);

    while (A_Sacar - 20 >= 0) {
        notas[2] ++;
        A_Sacar -= 20;
    }
    if (notas[2] > 0) printf("%d nota(s) de 20\n", notas[2]);

    while (A_Sacar - 10 >= 0) {
        notas[3] ++;
        A_Sacar -= 10;
    }
    if (notas[3] > 0) printf("%d nota(s) de 10\n", notas[3]);

    while (A_Sacar - 5 >= 0) {
        notas[4] ++;
        A_Sacar -= 5;
    }
    if (notas[4] > 0) printf("%d nota(s) de 5\n", notas[4]);

    while (A_Sacar - 2 >= 0) {
        notas[5] ++;
        A_Sacar -= 2;
    }
    if (notas[5] > 0) printf("%d nota(s) de 2\n", notas[5]);

    while (A_Sacar - 1 >= 0) {
        notas[6] ++;
        A_Sacar -= 1;
    }
    if (notas[6] > 0) printf("%d nota(s) de 1\n", notas[6]);
}

// 53
void floyd_triangular(){
    int num, cont = 1;

    printf("Entre com a quantidade de linhas: ");
    scanf("%d", &num);

    for (int i=-1; i<num; i++){
        for (int j=-1; j<i; j++){
            printf("%d ", cont);
            cont ++;
        }
                printf("\n");
    }
}

// 54
int primo(int num) {
	int i;

	for(i=2;i<num;i++)
		if(num % i == 0 && num != 1) return 0;
			return 1;
}

void verifica_primo() {
    int num;

    while (num <= 0) {
        printf("Entre com um número: ");
        scanf("%d", &num);
    }
    if (primo(num)) printf("É primo\n");
    else printf("Não é primo\n");
}

// 55
void soma_primeiros_primos(){
    int N, soma = 0, cont = 0, i = 1;

    printf("Entre com um número: ");
    scanf("%d", &N);

    while (cont <= N) {
        if (primo(i)) {
            soma += i;
            cont += 1;
        }

        i++;
    }

    printf("A soma dos %d primeiros números primos é: %d\n", N, soma -1);
}

// 56

void soma_primos_ate_2000000() {
    unsigned int soma = 0;

    printf("\aALERTA! código MUITO lento (muitos números)\n");

    for (int i=2; i<2000001; i++)
        if (primo(i)) soma += i;

    printf("A soma entre os números primos abaixo de dois milhões é: %d\n", soma);

}

// 57
void primos_entre_xy() {
    int inicio, fim, Qtd_Primo = 1;

    printf("Entre com um número: ");
    scanf("%d", &inicio);

    printf("Entre com outro número: ");
    scanf("%d", &fim);

    while (inicio > fim) {
        printf("O valor de inicio deve ser maior que o final.\n");

        printf("Entre com um número: ");
        scanf("%d", &inicio);

        printf("Entre com outro número: ");
        scanf("%d", &fim);
    }

    while (inicio != fim) {
        if (primo(inicio)) {
			Qtd_Primo += 1;
		}
        inicio ++;
    }
    printf("Existem %d números primos entre %d e %d\n", Qtd_Primo, inicio, fim);
}

// 58
void soma_primos_entre_xy() {
    int inicio, fim, Soma_Primo = 1;

    printf("Entre com um número: ");
    scanf("%d", &inicio);

    printf("Entre com outro número: ");
    scanf("%d", &fim);

    while (inicio > fim) {
        printf("O valor de inicio deve ser maior que o final.\n");

        printf("Entre com um número: ");
        scanf("%d", &inicio);

        printf("Entre com outro número: ");
        scanf("%d", &fim);
    }

    while (inicio != fim) {
        if (primo(inicio)) {
			Soma_Primo += inicio;
		}
        inicio ++;
    }
    printf("A soma dos primos é: %d\n", Soma_Primo);
}

// 59
void consumo_no_mes() {
 	int qtd_hab, kwh,  *consumo, soma = 0, maior, menor;
 	char codigo = 'x';

 	consumo = (int*) calloc (3, sizeof(int));

 	printf("Qual a quantidade de habitantes? ");
 	scanf("%d", &qtd_hab);

 	for (int i=0; i<qtd_hab; i++) {
 		printf("Entre com o consumo do mês do %dº habitante: ", i+1);
 		scanf("%d", &kwh);

 		soma += kwh;

        while (codigo < '1' || codigo > '3') {
            printf("\nEntre com o código: \n");
            printf("[ 1 ] Residencial\n");
            printf("[ 2 ] Comercial\n");
            printf("[ 3 ] Industrial\n");
            codigo = getche();
            printf("\n\n");
        }

 		if (codigo == '1') consumo[0] += kwh;
 		else if (codigo == '2') consumo[1] += kwh;
 		else consumo[2] += kwh;

        codigo = 'x';

        if (i == 1) maior =  menor = kwh;

        else if (maior < kwh) maior = kwh;

        else if (menor > kwh) menor = kwh;
    }

    printf("Maior consumo: %d\n", maior);
    printf("Menor consumo: %d\n", menor);
    printf("Media de consumo: %d\n\n", soma / qtd_hab);
    printf("Total de consumo residencial: %d\n", consumo[0]);
    printf("Total de consumo comercial: %d\n", consumo[1]);
    printf("Total de consumo industrial: %d\n", consumo[2]);
 }

// 60
void soma_qtd_med_ma_me_par() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;

  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}
// 60
void soma_qtd_med_ma_me_par() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;

  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}
// 60
void soma_qtd_med_ma_me_par() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;

  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}
// 60
void soma_qtd_med_ma_me_par() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;

  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}

// 61
int VerificaPalindromo (char numeroDigitado[]) {
    char s2[4];

    strcpy(s2,numeroDigitado);
    strrev(numeroDigitado);

    if(strcmp(numeroDigitado,s2) == 0) return 1;
    return 0;
}

void Maior_Palindromo() {
	char x[10];
	int aux = 0;
    for (int i=999; i>99; i--) {
        for (int j=999; j>=99; j--) {
			itoa(i * j, x, 10);
            if (VerificaPalindromo(x)) {
            	printf("%d x %d = %d\n", i, j, i * j );
            	aux = 1;
            	break;
			}
		}
	if (aux) break;
	}

	system("pause");
}

// 62
void Soma_Caractere_Num_extenso() {
    char num = 'x';

    while (num < '1' || num > '5') {
        printf("Entre com um número (digitos de 1 a 5)");
        scanf("%c", &num);
    }

    switch (num) {
        case '1':
            printf("2 letras utilizadas no total. \n");
            break;
        case '2':
            printf("4 letras utilizadas no total.\n");
            break;
        case '3':
            printf("4 letras utilizadas no total.\n");
            break;
        case '4':
            printf("6 letras utilizadas no total.\n");
            break;
        case '5':
            printf("5 letras utilizadas no total.\n");
            break;
    }

    system("pause");
}
