#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Ingrese la temperatura en c: ");
    int dato;
    scanf("%d", &dato);
    float resultado;
    resultado = (dato * 1.8) + 32;
    printf("La temperatura en F es: %f \n",resultado);
    return 0;
}