#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "");

float valor1, valor2;
int opcao;
printf ("\n Digite primeiro valor: ");
scanf ("%f", &valor1);
printf ("\n Digite segundo valor: ");
scanf ("%f", &valor2);


printf ("\n Opção escolhida é a 1 - Soma");
printf ("\n Opção escolhida é a 2 - Subtração");
printf ("\n Opção escolhida é a 3 - Divisão");
printf ("\n Opção escolhida é a 4 - Multiplicação");

printf("\n Opção escolhida: ");
scanf ("%d", &opcao);

switch (opcao) {
case 1:
    printf ("A soma é: %2.f", valor1+valor2);
    break;
case 2:
    printf ("A subtração é: %2.f", valor1-valor2);
    break;
case 3:
    printf ("A multiplicação é: %2.f", valor1*valor2);
    break;
case 4:
    if (valor1==0) {
        printf ("NÃO EXISTE DIVISÃO POR ZERO");
    }
    else {
        printf ("A divisão é %2.f", valor1 / valor2);
    }
    break;

}
return 0;

}
