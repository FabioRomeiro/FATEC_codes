#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main(){
  int px,py,pz, foi_declarada = 0;
  float maior=0, menor=0, distancia[5];
  printf("Entre com as coordenadas do planeta 'x,y,z' (Ex: 0,5,-1):\n");
  scanf("%d,%d,%d", &px,&py,&pz);

  int naves[5][3];
  for (int i = 0; i < (sizeof(naves)/sizeof(naves[0])); i++) {
    printf("Entre com as coordenadas da nave 'x,y,z' (Ex: 0,5,-1):\n");
    scanf("%d,%d,%d", &naves[i][0],&naves[i][1],&naves[i][2]);

    distancia[i] = sqrt( pow((px - naves[i][0]),2) + pow((py - naves[i][1]),2) + pow((pz - naves[i][2]),2) );
  }

  int ordem[] = {0,1,2,3,4};
  int auxOrdem;
  for( int x = 0; x < 5; x++ ) {
    for( int y = x + 1; y < 5; y++ ) {
      if ( distancia[y] > distancia[x] ) {
         auxOrdem = ordem[y];
         ordem[y] = ordem[x];
         ordem[x] = auxOrdem;
      }
    }
  }

  printf("Sequencia das naves: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", ordem[i]);
  }
  getch();
  return 0;
}
