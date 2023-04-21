#include <stdlib.h>
#include <stdio.h>

/*
    El argc resive la cantidad de argumentos, que le pasas por la consola cmd
    El argv[] es una lista con los argumentos como tal
    por ejemplo [hola, 25, etc]
    argv[1] = hola //segun el ej anterior.
    argv[0] = es el nombre del ejecutable.
*/

/*int esPrimo(numero){
    for (int i = 2; i < numero; i++)
    {
        if (numero%i==0)
        {
            return 0;
        }
    }
    return 1;
}*/

void factoresPrimos(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
            i = i - 1; // para revisar si sirve el mismo numero en la sgte iteracion
        }
    }
}

int main(int argc, char *argv[])
{

    char *numero = argv[1];
    printf("EL numero ingresado es: %s\n", numero);
    int entero = atoi(numero);
    factoresPrimos(entero);
    return 0;
}