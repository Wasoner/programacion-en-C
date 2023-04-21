#include <stdio.h>
#include<stdlib.h>



int factorial(int num){
    int fact = 1;
    if (num==0)
    {
        return 1;
    }
    for (int  i = 1; i <= num; i++)
    { 
        fact*= i; 
    }
    return fact;

}
int main(){

    printf("Ingrese un numero por teclado: ");\
    int num;
    scanf("%d", &num);
    
    printf("El factorial del numero %d es: %d", num, factorial(num));
    return 0;
}