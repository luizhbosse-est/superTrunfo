#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int idade;
    char nome[50];
    char opcao;

    printf("Digite seu nome: "); 
    // scanf("%s", &nome);    
    fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)    
    nome[strcspn(nome, "\n")] = 0; // fgets inclui o '\n' na string, então podemos removê-lo se necessário

    printf("Digite a sua idade: "); 
    scanf("%d", &idade);
    
    printf("Digite uma opção(A,C) "); 
    scanf(" %c", &opcao);

    printf("Minha idade é %d, meu nome é %s e minha altura é %.2f., Opção %c", idade, nome, 1.75, opcao);
}