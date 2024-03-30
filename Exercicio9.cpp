#include <iostream>

int main () {

    int num1;
    printf("digite um numero:\n");
    scanf("%d", &num1);

    int parEpositivo;
    parEpositivo = num1 > 0 && num1 / 2 ;

    int resto = num1 % 2;

    printf("par e positivo: %d > 0 && %d / 2, resto: %d\n", num1, num1, resto);

return 0;
}