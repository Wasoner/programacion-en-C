#include <stdio.h>
#include <stdlib.h>
// version con while
/*
int factorial(int n){
    int fact = 1;
    while (1 < n){
        fact *= n; // equivalente a fact = fact * n;
        n-- ; // equivalente a n = n-1;  
    }
    return fact;
}
*/

// version con for
int factorial(int n){
    int fact = 1;
    for (int i=1 ; i <= n; i++){ 
    // en un ciclo for se establece (declaracion de variable; condicion; accion final)
    // entonces, al iniciar un ciclo, se establece que i valdra 1
    // en cada ciclo preguntaremos si i es menor o igual a n
    // si no lo es, se acaba el ciclo
    // si si lo es, se entra en el cuerpo de la funcion (fact *=i)
    // posterior a su ejecucion, se ejecuta la instruccion final (i++)
        fact *= i;  
    }
    return fact;
}

int main(int argc, char *argv[]){
    // argc corresponde a la cantidad de argumentos que recibe la terminal
    // argv es la lista de strings de argumentos entregados en la terminal, incluyendo ./n_ejecutable
    // es decir que en el correcto uso de este programa, va a utilizar
    // ./n_ejecutable 6
    // argc es 2
    // argv es una lista que incluye "./n_ejecutable", "2"
    
    //por lo tanto, podemos controlar que el usuario utilice bien nuestro programa
    if (argc != 2){
        printf("No ingresaste la cantidad correcta de argumentos");
        return 1;
    }
    
    int i = atoi(argv[1]); 
    // atoi es una funcion de stdlib que transforma un string (char*) a un int,
    // tambien existen atof para float y otras funciones para otros tipos de numeros
    int fact = factorial(i);
    printf("%d \n", fact);
    return 0 ;
}
