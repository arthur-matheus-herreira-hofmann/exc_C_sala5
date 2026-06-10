#include<stdio.h>
#include<stdlib.h>
#include<locale>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i, n;

    printf("Informe um número para a tabuada: \n");
    scanf("%d", &n);

    printf("\n T A B U A D A");
    printf("\n ==============");

    for(i = 0; i <= 10; i++){
        printf("\n %d x %2d = %4d", n, i, (n * 1));
    }

    printf("\n ==============");

    system("pause");
    return 0;
}