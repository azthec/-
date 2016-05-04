#include <stdio.h>

/*Faça um programa que, dado o tamanho de dois lados adjacentes de um rectângulo, calcule a sua área e o seu perímetro. Quando escrever o resultado indica se se trata dum quadrado ou não.*/

int main() {
  int l1, l2, A, P;
  scanf("%d %d", &l1, &l2);
  A = l1 * l2;
  P = l1+l1+l2+l2;
  if (l1 == l2){
    printf("The perimeter of the square is %d m.\n", P);
    printf("The area of the square is %d m2.\n" ,A);
  }
  if (l1 != l2) {
    printf("The perimeter of the rectangle is %d m.\n", P);
    printf("The area of the rectangle is %d m2.\n", A);
  }

  return 0;
}
