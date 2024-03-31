#include <iostream>

int main () {

    printf("calcular triangulo :)\n\n");

    int num1;
    int num2;
    int num3;

    
    printf("digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("digite o segundo numero:\n");
    scanf("%d", &num2);
    printf("digite o terceiro numero:\n");
    scanf("%d", &num3);

    int triangulo;
    triangulo = num1 + num2 > num3;
    printf("é possivel fazer um triangulo? %d + %d > %d\n", num1, num2, num3); 

return 0;
}