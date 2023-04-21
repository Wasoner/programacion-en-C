#include <stdlib.h>
#include <stdio.h>

void factoresPrimos(int n){
    int i = 2;
    while (i<=n){
        if (n%i == 0){
        printf("%d ", i);
        n = n/i;
        }
        else{
            i++;
        }
    }
}

int main(int argc, char *argv[]){
    if (argc != 2){
        printf("No ingresaste la cantidad correcta de argumentos");
        return 1;
    }
    int n = atoi(argv[1]);
    if (n==1){
        printf("1");
    }
    factoresPrimos(n);
    printf("\n");
    return 0;
}
