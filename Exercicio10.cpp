#include <iostream>

int main () {

    float num1, num2, num3, p1, p2, p3, res;

    printf("digite a primeira nota:\n");
    scanf("%f", &num1);
    printf("digite a segunda nota:\n");
    scanf("%d", &num2);
    printf("digite  a terceira nota:\n");
    scanf("%d", &num3);
    printf("digite o peso da primeira nota:\n");
    scanf("%f", &p1);
    printf("digite o peso da segunda nota:\n");
    scanf("%d", &p2);
    printf("digite o peso da terceira nota:\n");
    scanf("%d", &p3);

    res = ((num1 * p1) + (num2 * p2) + (num3 * p3)) / (p1 + p2 + p3);
    printf("%f", res);

return 0;
}