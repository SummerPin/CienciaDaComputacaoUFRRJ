#include <stdio.h>

int main(){
    double nota1, nota2;
    scanf("%lf%lf",&nota1,&nota2);
    double media = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;

    printf("MEDIA = %.5lf\n", media);

}