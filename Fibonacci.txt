#include <stdio.h>

int main() {
  int f1 = 1, f2 = 1, calc = 1, num;

  printf("Digite o numero: ");
  scanf("%d",&num);

  while (num > calc){
    calc = f1 + f2;
    f1 = f2;
    f2 = calc;
  }
  if (num == calc){
    printf("Faz parte de Fibonacci");
  }else{
    printf("Não faz parte de Fibonacci");
  }
  
  return 0;
}