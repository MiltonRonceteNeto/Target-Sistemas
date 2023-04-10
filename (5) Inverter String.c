#include <stdio.h>
#include <string.h>

void inverter_string(char * string) {

  int tam = strlen(string);

  for (int i = 0; i < tam / 2; i++) {
    char temp = string[i];
    string[i] = string[tam - i - 1];
    string[tam - i - 1] = temp;
  }

}

int main() {
  char string[1000];

  printf("Digite a String para ser invertida: ");
  fgets(string, 1000, stdin);

  string[strcspn(string, "\n")] = '\0';

  inverter_string(string);

  printf("String Invertida: %s\n", string);

  return 0;
}