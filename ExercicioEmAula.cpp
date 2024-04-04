#include <iostream>

int main () {

    int a, b;
    printf("digite um numero:");
    scanf("%d", &a);
    printf("digite outro numero:");
    scanf("%d", &b);

    if(a>b)
    {
        printf(" o numero %d é maior que %d\n", a, b);
    }
    if(a<b)
    {
        printf(" o numero %d é menor que %d\n", a, b);
    }
    if(a==b)
    {
        printf("o numero %d é igual a %d\n", a, b);
    }
return 0;
}