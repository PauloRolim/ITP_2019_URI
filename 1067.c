#include <stdio.h>

int main(){

    
    int i, x;

    scanf("%d", &x);

     for (i = 0; i <= x; i++){
        if (i%2 !=0){
            printf("%d\n", i);
        }

        if (i == x){
            break;
        }
    }

    return 0;
}
