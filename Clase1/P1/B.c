#include <stdio.h>
#include <stdlib.h>

int factorial(int num){

    if (num<2){
     return 1;   
    }else{
        return num*factorial(num-1);
    }
    return 0;
}

int main(){
    
    printf("Ingese un numero: ");
    int num = 0;
    scanf("%d", &num);

    printf("El factorial del numero es:%d ", factorial(num));
    
    return 0;
}

