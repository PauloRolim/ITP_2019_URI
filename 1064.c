#include <stdio.h>
#include <stdlib.h>
 
int main() {
      
    double numeros[6], media=0, contador=0;
    int i, positivos=0;

    for (i = 1; i <= 6; i++){
        scanf("%lf", &numeros[i]);

        if (numeros[i] > 0.0)
        {
            positivos++;
            contador += numeros[i];
        }
    }

    media = (contador / positivos);
    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);
 
    return 0;
}
