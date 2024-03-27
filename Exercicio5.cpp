#include <iostream>

int main () {

    float celsius, Fahrenheit;

    printf("digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    Fahrenheit = (celsius * 9/5) + 32;
    printf("Fahrenheit: %.2f\n", Fahrenheit);

return 0;
}