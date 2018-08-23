
void situacao_escolar() {
  float lab = -1, avSem=-1, eF= -1, media;

  while (lab<0 || lab>10) {
    printf("Digite a nota da prova AV1:\n");
    scanf("%f", &lab);
  }
  while (avSem<0 || avSem>10) {
    printf("Digite a nota da prova AV2:\n");
    scanf("%f", &avSem);
  }
  while (eF<0 || eF>10) {
    printf("Digite a nota da prova AV3:\n");
    scanf("%f", &eF);
  }

  media = ((lab*2) + (avSem*3) + (eF*5))/4;

  if (media>=0 && media < 3) {
    printf("REPROVADO");
  } else if (media>=3 && media < 5) {
    printf("RECUPERACAO");
  } else if (media>=5) {
    printf("APROVADO");
  }
}

void qual_o_maior() {
  int a,b,expression,difference;

  printf("Digite o primeiro número:\n");
  scanf("%d", &a);
  printf("Digite o segundo número:\n");
  scanf("%d", &b);

  expression = a > b;
  if (a!=b){
    switch (expression) {
      case 1: printf("\n%d", a);
              difference = a - b;
              break;
      case 0: printf("\n%d", b);
              difference = b - a;
              break;
    }
    printf(" é o maior número, e a diferença entre eles é de %d", difference);
  } else {
    printf("Ambos os números valem %d", a);
  }
}

void invalido_or_logaritmo() {
    int numero, soma = 0;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero<0) {
      printf("Número Invalido");
    } else {
      printf("%f",log(numero));
    }
}

void area_trapezio() {
    float altura,baseMaior,baseMenor, area;

    printf("Digite a altura do trapézio:\n");
    scanf("%f", &altura);
    printf("Digite a base maior do trapézio:\n");
    scanf("%f", &baseMaior);
    printf("Digite a base menor do trapézio:\n");
    scanf("%f", &baseMenor);

    area = (altura + baseMaior)*altura/2;

    printf("Area do trapézio: %.2fm²", area);
}

void que_triangulo() {
  float a,b,c;

  printf("Digite um valor A:\n");
  scanf("%f", &a);
  printf("Digite um valor B:\n");
  scanf("%f", &b);
  printf("Digite um valor C:\n");
  scanf("%f", &c);

  if (a>b+c || b>a+c || c>b+a) {
    printf("Não é possivel formar um triangulo com os valores passados\n");
  } else if (a == b && b == c && a == c) {
    printf("Pode-se formar um triangulo equilatero\n");
  } else if (a == b || a == c || b == c) {
    printf("Pode-se formar um triangulo isóceles\n");
  } else if ( a != b && a != c && b != c) {
    printf("Pode-se formar um triangulo escaleno\n");
  }
}
