#include <stdio.h>

float Resto(m, n) {
  if (m < 0)
    return m + n;

  return Resto(m - n, n);
}

int main(void) {
  float m, n;
  printf("Digite o valor de m: ");
  scanf("%f", &m);
  printf("Digite o valor de n: ");
  scanf("%f", &n);

  printf("O resto da divisao de %.2f / %.2f e: %.2f\n", m, n, Resto(m, n));
  return 0;
}