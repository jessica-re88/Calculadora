#include <stdio.h>

int main() {
    float altura, peso, imc;

    printf("Vamos calcular o teu IMC\n");

    printf("Insira aqui a tua altura em cm: ");
    if (scanf("%f", &altura) != 1) {
        return 1;
    }

    printf("Insira agora o teu peso em kg: ");
    if (scanf("%f", &peso) != 1) {
        return 1;
    }

    imc = peso / ((altura / 100) * (altura / 100));

    if (imc <= 18.5) {
        printf("Você está no índice de magreza\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Você está com o índice normal, parabéns!\n");
    } else {
        printf("Você está em sobrepeso.\n");
    }

    return 0;
}

