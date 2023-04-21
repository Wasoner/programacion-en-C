#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "decimal.h"

// este archivo representa al que ustedes deberan editar durante las tareas
// o sea, crear una unica funcion que sera utilizada por el main

// esta funcion podria ayudarlos en la proxima tarea... o pueden buscar un conversor por internet
int decimal(int binario){
    int exponente = 0;
    int resultado = 0;
    while (binario!=0){
        if (binario % 2 == 1){
            resultado = resultado + pow(2, exponente);
            binario--;
            binario/=10; // equivalente a escribir: binario = binario/10
        }
        else{
            binario/=10;
        }
        exponente++;
    }
    //printf("%d", resultado);
    return resultado;
}



