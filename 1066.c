#include <stdio.h>
 
int main() {
     
    int numeros[6];
    int i, pares = 0, impares =0, positivo = 0, negativo = 0;


    for (i = 1; i <= 5; i++){
        scanf("%d", &numeros[i]);

        if ((numeros[i]%2) == 0){
            pares++;
        }
    }

    for (i = 1; i <= 5; i++){
        if (numeros[i]%2 !=0){
            impares++;
        }
    }

    for (i = 1; i <=5; i++){
        if (numeros[i] > 0.0){
            positivo++;
        }
    }

    for (i = 1; i <= 5; i++){
        if (numeros[i] < 0.0){
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n", pares); 
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
