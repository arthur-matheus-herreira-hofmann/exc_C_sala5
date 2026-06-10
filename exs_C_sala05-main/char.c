#include<stdio.h>
#include<stdlib.h>

int main(){

    char cidade[50];
    char estado[50];
    int ano;
    int resp;

    printf("Digite sua cidade: ");
    fgets(cidade, 50, stdin);

    printf("Digite seu estado: ");
    fgets(estado, 50, stdin);
    
    printf("Qual seu ano de nascimento: ");
    scanf("%d", &ano);

    resp = 2026 - ano;

    printf("Você nasceu em %s, no estado de(o) %s e tem cerca de %d ano(s)", cidade, estado, resp);

    system("pause");
    return 0;
}