#include <stdio.h>

int main() {
  float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, ou = 19849.53, spp, rjp, mgp, esp, oup, total = 0;

  total = sp + rj + mg + es + ou;
  
  spp = (sp / total) * 100;
  printf("Percentual de representação de SP: %.2f\n", spp);

  rjp = (rj / total) * 100;
  printf("Percentual de representação do RJ: %.2f\n", rjp);

  mgp = (mg / total) * 100;
  printf("Percentual de representação de MG: %.2f\n", mgp);

  esp = (es / total) * 100;
  printf("Percentual de representação do ES: %.2f\n", esp);

  oup = (ou / total) * 100;
  printf("Percentual de representação do ES: %.2f\n", oup);

  return 0;
}