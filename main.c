#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int dias, pessoas, meses;
	
	printf("Informe o número de dias que o Corona Vírus chegou ao seu munícipio: ");
	scanf("%d", &dias);

pessoas = (pow(2,dias)) / (pow(dias,4)) + pow(dias,2);
meses = dias / 30;

	system("cls");
	
	printf("------------- ÍNDICE -------------\n");
	printf("O tanto de infectados é: %d pessoas\n", pessoas);
	printf("O tempo que o vírus habita é de %d meses!\n", meses);
	printf("------------- ÍNDICE -------------\n");
	
	system("pause");
	return (0);
}
