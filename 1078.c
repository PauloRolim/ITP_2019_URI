#include <stdio.h>

int main (){

    int n , i, multiplicacao;

    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        multiplicacao = i * n;
        
        printf("%d x %d = %d\n", i, n, multiplicacao);
    }
    

    return 0;
}
