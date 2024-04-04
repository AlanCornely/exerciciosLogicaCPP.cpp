#include <iostream>

int main () {

    int num1;
    
    printf("digite um numero:");
    scanf("%d", &num1);

    int div;
    div = num1 / 3 && num1 / 5;

    printf("seu numero é divisivel? %d\n", div);


return 0;
}