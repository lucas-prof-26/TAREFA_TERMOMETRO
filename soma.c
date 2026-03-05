#include <stdio.h>

int main(){
    int res = 0, i;
    int array[5];
    printf("digite 5 inteiros separados por espaco ou enter: \n");
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    for(i = 0; i != 5; i++){
        res = array[i] + res;
    }
    printf("resultado: %d", res);
}