#include <stdio.h>

int main() {
    // Aqui define-se as variáveis, sendo que a, b, e resultado serão float (nºs reais)
    // E a escolha, sendo que neste caso está de 1-5, será inteira (int)
    float a, b, resultado;
    int escolha;

    // O programa vai funcionar em loop usando "while (true)"
    while (1) {
        // Menu principal
        printf("\nBem-Vindo(a) ");
        printf("\nLista de Opções ");
        printf("1. Soma ");
        printf("2. Subtração ");
        printf("3. Multiplicação ");
        printf("4. Divisão ");
        printf("5. Sair");
        printf("\nIndique a opção a executar: ");
        

        // Valida a escolha do utilizador
        if (scanf("%d", &escolha) != 1){
            printf("Erro! O nr deve ser inteiro! " );
            return 1;
        }

        // Verifica se a escolha é "Sair" e termina o programa
        if (escolha == 5) {
           printf("Obrigado por utilizar o programa! ");
            break;
        }

        // Verifica se a escolha é válida (entre 1 e 5)
        if (escolha < 1 || escolha > 5) {
           printf("Erro! Opção inválida, tente de novo.");
            continue;
        }

        // Valida os números a e b
        printf("Insira o primeiro numero: ");
        if (scanf("%f" , &a) != 1){
            printf("Erro! O nr deve ser real! ");
            return 1;
        }

        printf("Insira o segundo numero: ");
        if (scanf("%f" , &b) != 1){
            printf("Erro! O nr deve ser real!\n ");
            return 1;
        }

        // Estrutura if-else if para executar a opção indicada
        if (escolha == 1) {
            // Soma
            resultado = a + b;
            printf( "Resultado da soma: %2.f " , resultado);
        } 
        else if (escolha == 2) {
            // Subtração
            resultado = a - b;
            printf("Resultado da subtração: %2.f " , resultado ) ;
        } 
        else if (escolha == 3) {
            // Multiplicação
            resultado = a * b;
            printf("Resultado da multiplicação: %2.f" , resultado);
        } 
        else if (escolha == 4) {
            // Divisão (com verificação de divisão por zero)
            if (b == 0) {
                printf("Erro! É impossível dividir por 0!" );
            } else {
                resultado = a / b;
                printf("Resultado da divisão: %.2f", resultado );
            }
        }
    }
    return 0;
}

