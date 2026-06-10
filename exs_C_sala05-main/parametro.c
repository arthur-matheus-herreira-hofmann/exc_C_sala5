#include<stdio.h>
#include<stdlib.h>
#include<locale>

int soma(int p_n1, int p_n2);

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, res;

    printf("Manda o n1 pra eu pagar meu aluguel: ");
    scanf("%d", &n1);

    printf("Manda o n2 pra eu pagar meu aluguel: ");
    scanf("%d", &n2);

    res = soma(n1, n2);

    system("pause");
    return 0;

}