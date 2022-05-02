#include <stdio.h>
#include <locale.h>
/* Desenvolva um programa em C que preencha um vetor com 10 valores inteiros, e 
imprima estes mesmos valores na ordem inversa à da leitura */

int main ()

{
	setlocale (LC_ALL, "Portuguese");
	int aux, num [9];
	
	for (aux=0; aux < 10; aux++)
	{
		printf ("Digite um número inteiro: ");
		scanf ("%d", &num[aux]);
	}
	
	for (aux = 9; aux >= 0; aux--)
	{
		printf ("%d  ", num [aux]);
	}
	
}
