#include <iostream>

int main () {

    int num1;
    printf(" digite o primeiro numero: ");
    scanf("%d", &num1);

    int positivo;
    positivo = num1 > 0;
    printf(" seu numero é posiivo: %d > 0 \n", num1 );

    int negativo;
    negativo = num1 < 0;
    printf("seu numero é negativo: %d < 0", num1);

return 0;
}