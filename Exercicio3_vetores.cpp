#include <stdio.h>
#include <locale.h>
/*Desenvolva um programa que preencha um vetor de 10 inteiros, e ap�s o 
preenchimento apresente os n�meros que s�o divis�veis por 3 e 7, assim como o 
resultado da soma destes valores sem repeti��o.*/

int main ()


{
	setlocale (LC_ALL, "Portuguese");
	int vetor[9], aux, soma;
	
	for (aux=0; aux < 10; aux++)
	{
		printf ("Digite um n�mero: ");
		scanf ("%d", &vetor[aux]);	
    }
    
	for (aux=0; aux < 10; aux++)
	{
		if (vetor[aux]%3 == 0)
		{
			printf ("Divis�veis por 3 = %d\n", vetor[aux]);
		}
		else
		{
			if (vetor[aux]%7 == 0)
			{
				printf("Divis�veis por 7 = %d\n", vetor[aux]);
			}
		}	
	}
	
	for (aux=0; aux < 10; aux++)
	{
		if (vetor[aux]%3 == 0 && vetor[aux]%7 == 0)
		{
			soma = soma + vetor[aux];
		}	
	}
	printf ("Soma= %d", soma);
}

