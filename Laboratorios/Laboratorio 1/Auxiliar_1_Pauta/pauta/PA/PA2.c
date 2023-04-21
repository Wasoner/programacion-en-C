#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int i = 9;
    int fact = factorial(i);
    printf("%d", fact);
    return 0 ;
}
