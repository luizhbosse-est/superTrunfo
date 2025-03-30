#include <stdio.h>

int main(){

        int idade, matricula;
        float altura;
        char nome[50];

        printf("Digite seu nome: ");  
        fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)    
        nome[strcspn(nome, "\n")] = 0; // fgets inclui o '\n' na string, então podemos removê-lo se necessário
    
        printf("Digite a sua idade: "); 
        scanf("%d", &idade);

        printf("Digite a sua altura: "); 
        scanf("%f", &altura);

        printf("Digite a sua matricula: "); 
        scanf("%d", &matricula);

        printf("Nome do aluno: %s - Matricula: %d", nome, matricula);
        printf("Idade: %d - Altura: %f", idade, altura);

}