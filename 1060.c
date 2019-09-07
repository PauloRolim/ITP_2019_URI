#include <stdio.h>
 
int main() {
    
    int num01, num02, num03, num04, num05, num06;

    int contador = 0;

    scanf("%d", &num01);
    scanf("%d", &num02);
    scanf("%d", &num03);
    scanf("%d", &num04);
    scanf("%d", &num05);
    scanf("%d", &num06);

    if (num01 > 0){
        contador++;
    };

    if (num02 > 0)
    {
        contador++;
    };

    if (num03 > 0)
    {
        contador++;
    };

    if (num04 > 0)
    {
        contador++;
    };

    if (num05 > 0)
    {
        contador++;
    };

    if (num06 > 0)
    {
        contador++;
    };

    printf("%d valores positivos\n", contador);
 
    return 0;
}
