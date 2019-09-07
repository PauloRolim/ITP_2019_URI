#include <stdio.h>
 
int main() {
     
    int numeros[6];
    int i, pares = 0;


    for (i = 1; i <= 6; i++){
        scanf("%d", &numeros[i]);

        if ((numeros[i]%2) == 0 && numeros[i] != 0){
            pares++;
        }
    }

    printf("%d valores pares\n", pares); 
 
    return 0;
}
