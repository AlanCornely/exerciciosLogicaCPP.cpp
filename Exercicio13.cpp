#include <iostream>

int main () {

    int num1;
    
    printf("digite uma hora:\n");
    scanf("%d", &num1);

    int hps;
    hps = num1 * 3600;

    printf("sua hora em minutos são %d", hps);

return 0;
}