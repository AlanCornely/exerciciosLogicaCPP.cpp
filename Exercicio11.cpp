#include <iostream>

int main () {

    int num1;
    int num2;

    printf("digite o primeiro peso:\n");
    scanf("%d", &num1);
    printf("digite o segundo peso:\n");
    scanf("%d", &num2);

    int a;
    a = (num1 + num2) /2;

    printf("a área do triangulo é: (%d + %d) / 2", num1, num2);
    

return 0;
}