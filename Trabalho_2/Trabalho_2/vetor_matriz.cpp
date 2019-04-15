#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "vetor_matriz.h"

int i, j, a, aux;

void preencher(int vetor[], int quant)
{
	printf("Digite %d valores para o vetor \n\n", quant);

	for (i = 0; i < quant; i++)
	{
		a = i + 1;
		printf("Digite o valor %d: ", a);
		scanf_s("%d", &vetor[i]);
	}
}

void exibir(int vetor[], int quant)
{
	for (i = 0; i < quant; i++)
	{
		printf("%d\t", vetor[i]);
	}
}

int n_maior(int vetor[10])
{
	int maior = vetor[0];
	for (i = 1; i < 10; i++) if (vetor[i] > maior) maior = vetor[i];

	return maior;
}

int n_menor(int vetor[10])
{
	int menor = vetor[0];
	for (i = 1; i < 10; i++) if (vetor[i] < menor) menor = vetor[i];

	return menor;
}

void n_impar(int vetor[10])
{
	int impar[10];
	for (i = 0; i < 10; i++) impar[i] = 0;
	j = 0;
	for (i = 0; i < 10; i++)
	{
		aux = vetor[i] % 2;
		if (aux == 1)
		{
			impar[j] = vetor[i];
			j++;
		}
	}
	
	printf("\nOs n%cmeros %cmpares s%co: ", 163, 161, 198);
	for (i = 0; i < j; i++) printf("%d  ", impar[i]);
}

void n_primo(int vetor[10])
{
	for (i = 0; i < 10; i++)
	{
		aux = num_primos(vetor[i]);
		a = i + 1;
		if (aux == 1) printf("\n%d %c n%cmero primo. Ele %c o valor %d do vetor", vetor[i], 130, 163, 130, a);
	}
}

void encontrar(int vetor[8])
{
	printf("\nDigite um valor: ");
	scanf_s("%d", &aux);
	j = 0;
	for (i = 0; i < 8; i++)
	{
		if (vetor[i] == aux)
		{
			j = 1;
			a = i + 1;
			printf("\nEste n%cmero est%c na posi%c%co %d do vetor", 163, 160, 135, 198, a);
		}
	}
	if (j == 0) printf("\nEste n%cmero n%co est%c no vetor", 163, 198, 160);
}

void valor_diferente(int vetor[10]) 
{
	printf("Digite 10 valores para o vetor \n\n");
	for (i = 0; i < 10; i++)
	{
		a = i + 1;
		aux = i;
		printf("Digite o valor %d: ", a);
		scanf_s("%d", &vetor[i]);
		if (i != 0)
		{
			for (j = 0; j < aux; j++)
			{
				if (vetor[j] == vetor[aux])
				{
					printf("Valor j%c existente no vetor, tente novamente\n", 160);
					i--;
				}
			}
		}
	}
}

void preencher_m(int matriz[10][10], int quant1, int quant2)
{
	printf("Preencha a matriz %dx%d \n\n", quant1, quant2);
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++)
		{
			printf("Valor da posi%c%co [%d][%d]: ", 135, 198, i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}
}

void exibir_m(int matriz[10][10], int quant1, int quant2)
{
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++) printf("%d \t", matriz[i][j]);
		printf("\n");
	}
}

void multiplicar_2(int matriz[10][10], int quant1, int quant2)
{
	int aux[3][3];
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++)
		{
			aux[i][j] = 2 * matriz[i][j];
			printf("%d \t", aux[i][j]);
		}
		printf("\n");
	}
}

int soma_elemento(int matriz[10][10], int quant1, int quant2)
{
	int soma = 0;
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++) soma = soma + matriz[i][j];
	}
	return soma;
}

void imprimir_diagonal(int matriz[10][10], int quant1, int quant2)
{
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++)
		{
			if (i == j) printf("%d \t", matriz[i][j]);
			else printf("0 \t");
		}
		printf("\n");
	}
}

void imprimir_exceto_diagonal(int matriz[10][10], int quant1, int quant2)
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j) printf("0 \t");
			else printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
}

void nota_alunos(int matriz[10][10], int quant1, int quant2)
{
	printf("Insira as %d notas dos %d alunos: \n\n", quant2, quant1);
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++)
		{
			printf("Nota %d do aluno %d: ", j + 1, i + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}
}

void menor_nota(int matriz[10][10], int quant1, int quant2)
{
	int menor, cont1 = 0, cont2 = 0, cont3 = 0, extra;

	for (i = 0; i < quant1; i++)
	{
		menor = matriz[i][0];
		aux = 0;
		a = 3;
		extra = 3;
		for (j = 1; j < quant2; j++)
		{
			if (matriz[i][j] < menor)
			{
				menor = matriz[i][j];
				aux = j;
			}
			else if (matriz[i][j] == menor)
			{
				if (a != 3) extra = a;
				a = aux;
				aux = j;
			}
		}
		if (aux == 0 || a == 0 || extra == 0) cont1++;
		if (aux == 1 || a == 1 || extra == 1) cont2++;
		if (aux == 2 || a == 2 || extra == 2) cont3++;
	}
	printf("\n%d alunos foram pior na prova 1 \n%d alunos foram pior na prova 2 \n%d alunos foram pior na prova 3", cont1, cont2, cont3);
}

void matriz_equacao(int matriz[10][10], int quant1, int quant2)
{
	for (i = 0; i < quant1; i++)
	{
		for (j = 0; j < quant2; j++)
		{
			if (i < j) matriz[i][j] = 2 * i + 7 * j - 2;
			if (i == j) matriz[i][j] = 3 * i * i - 1;
			if (i > j) matriz[i][j] = 4 * i * i * i + 5 * j * j + 1;
		}
	}
}

void soma_colunas(int matriz[10][10], int quant1, int quant2)
{
	int soma[3];
	for (j = 0; j < quant2; j++)
	{
		soma[j] = 0;
		for (i = 0; i < quant1; i++)
		{
			soma[j] = soma[j] + matriz[i][j];
		}
		printf("%d \t", soma[j]);
	}
}