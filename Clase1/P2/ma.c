#include <stdio.h>
#include <stdlib.h>

int decimal(int binario) {
  char cadena[32];
  sprintf(cadena, "%d", binario);
  return strtol(cadena, NULL, 2);
}

int main() {
  int binario;
  printf("Ingrese un numero binario: ");
  scanf("%d", &binario);
  printf("El numero decimal es: %d\n", decimal(binario));
  return 0;
}




