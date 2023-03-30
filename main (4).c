#include <stdio.h>

float adicao(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if(num2 == 0) {
        printf("Não é possivel dividir por zero, tente novamente.\n");
        return 0;
    }
    else {
        return num1 / num2;
    }
}

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite a operação, sendo:\nadição (+)\nsubtração (-)\nmultiplicação (*)\ndivisão (/):\n");
    scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            resultado = adicao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            resultado = divisao(num1, num2);
            if(resultado != 0) {
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operação invalida, tente novamente.\n");
            break;
    }

    return 0;
}
