#include <stdlib.h>
#include <stdio.h>
#include "decimal.h" // gracias a este include lo que programen en decimal.c podra ser utilizado por este main

// Este archivo busca emular lo que se les entregará en tarea, es decir
// un main hecho por el profe con casos de prueba, normalmente no deben
// preocuparse de lo que haya en estos archivos, pero investigarlos a veces
// puede ayudarlos a descubrir en que estan fallando (si logran descifrarlos)

int main(){
    int caso1 = 1001;
    int caso2 = 110100;
    
    int resultadoIdeal1 = 9;
    int resultadoIdeal2 = 52;
    
    if (resultadoIdeal1 == decimal(caso1) && resultadoIdeal2 == decimal(caso2)){
        printf("Felicitaciones, su programa pasa los tests");
        return 0;
    }
    
    printf("Su programa no pasa los tests");
    return 1;
    
}
