#include <iostream>

int main () {

    int num1;
    printf("escreva o primeiro numero: ");
    scanf("%d", &num1);
    int num2;
    printf("escreva o segundo numero: ");
    scanf("%d", &num2);
    int num3;
    printf("escreva o terceiro numero: ");
    scanf("%d", &num3);

    int media = (num1 + num2 + num3)/3;

    printf("média: ( %d + %d + %d) /3 = %d\n", num1, num2, num3, media);

return 0;
}