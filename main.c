#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float b, h, a;

  printf("CALCULADORA DE ÁREA DO RETÂNGULO\n");
  printf("Digite o valor da altura: ");
  scanf("%f", &h);
  printf("O valor da altura é: %f \n", h);

  printf("Digite o valor da base: ");
  scanf("%f", &b);
  printf("O valor da base é: %f \n", b);

  a = (b * h);

  printf("A área do retângulo é: %f \n", a);
}