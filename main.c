#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int dias, pessoas, meses;
	
	printf("Informe o n�mero de dias que o Corona V�rus chegou ao seu mun�cipio: ");
	scanf("%d", &dias);

pessoas = (pow(2,dias)) / (pow(dias,4)) + pow(dias,2);
meses = dias / 30;

	system("cls");
	
	printf("------------- �NDICE -------------\n");
	printf("O tanto de infectados �: %d pessoas\n", pessoas);
	printf("O tempo que o v�rus habita � de %d meses!\n", meses);
	printf("------------- �NDICE -------------\n");
	
	system("pause");
	return (0);
}
