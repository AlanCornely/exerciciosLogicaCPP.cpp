#include <iostream>

int main () {

    int num1;
    int num2;
    int num3;

    printf("digite o primeiro peso:\n");
    scanf("%d", &num1);
    printf("digite o segundo peso:\n");
    scanf("%d", &num2);
    printf("digite o terceiro peso:\n");
    scanf("%d", &num3);

    int media;
    media = (num1 + num2 + num3) / 3;
    printf("a média é: (%d + %d + %d) / 3", num1, num2, num3);

return 0;
}