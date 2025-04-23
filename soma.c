

#include <stdio.h>

int somar(int a, int b){
  return a + b;
}

int main(){
  int num1 = 10;
  int num2 = 5;
  int resultado = somar(num1, num2);
  printf("A soma de %d e %d é: %d\n", num1, num2, resultado);
  return 0;
}
