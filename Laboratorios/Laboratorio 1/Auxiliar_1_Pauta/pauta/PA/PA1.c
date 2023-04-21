#include <stdio.h>
#include <stdlib.h>

int main(){
    int gradosC = 23;
    // pruebe la diferencia entre estas 3 formas de definir gradosF:
    
    // 1. la division entre enteros da un entero, por lo que 9/5 da 1  
      
    //int gradosF = 9/5*gradosC + 32; 
    
    // si escribimos 9.0 se interpretara como un numero decimal (tambien sirve solo
    // escribir 5.0), por lo que dividirlo por 5 dara 1.8, 1.8*5+32 = 73.4, pero 
    // como se guarda en una variable entera, solo se guardara el 73
    
    // int gradosF = 9.0/5*gradosC + 32;
    
    // para corregir lo anterior, basta con que la variable que almacena el resultado
    // tambien sea decimal (float)
    
    float gradosF = 9.0/5*gradosC + 32;
    
    // si quiere imprimir un float hay que usar %f, para enteros puede usar %d o %i
    printf("%f \n", gradosF); // el \n es un salto de linea,
    return 0 ;
}
