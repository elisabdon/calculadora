#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / b;
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Adicao: %d\n", addition(num1, num2));
    printf("Subtracao: %d\n", subtraction(num1, num2));
    printf("Multiplicacao: %d\n", multiplication(num1, num2));
    printf("Divisao: %f\n", division(num1, num2));
    
    return 0;
}