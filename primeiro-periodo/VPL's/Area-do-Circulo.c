#include <stdio.h>

int main(){
    double raio,pi=(3.14159);
    scanf("%lf",&raio);
    double cal=pi * (raio * raio);

    printf("A=%.4lf\n", cal);
}