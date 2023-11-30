#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void generateVector(int coluna, int vetor[]) {
	srand(time(NULL)); // Inicializa a semente para os números aleatórios
	int col, j;
	
	col = coluna;
	
	printf("\n%x", vetor);
 	
 	for (j = 0; j < col; j++)
 		vetor[j] = rand() % 100; //Gera números aleatórios entre 0 e 99
 		
}

void generateMatrix(int linha, int coluna) {
	srand(time(NULL)); // Inicializa a semente para os números aleatórios
 	int lin, col, i, j;
 	
 	lin = linha;
 	col = coluna;
 	
 	int matriz[lin][col];
 	
 	for (i = 0; i < lin; i++) {
 		for (j = 0; j < col; j++)
 			matriz[i][j] = rand() % 100;} //Gera números aleatórios entre 0 e 99
 	//abaixo somente para visualizacao (deletar...)
 	printf("\n\nMatriz gerada:\n");
 	for (i = 0; i < lin; i++) {
 		for (j = 0; j < col; j++)
 			printf("%2d ", matriz[i][j]);
 		printf("\n");}
}

void q1(){
	int x = 0, maior, tam, j;
	
	printf("Digite o tamanho do array: ");
	scanf("%d", &tam);
	
	int array[tam];
	
	generateVector(tam, array);
	printf("\n\n%x", array);
	
	maior = array[0];
	
	while(x < tam) {
		if (array[x] >= maior) maior = array[x];
		x++;
	}
	
	printf("\n\nVetor gerado:\n");
 		for (j = 0; j < tam; j++)
 			printf("%2d ", array[j]);
	
	printf("\n\nO maior numero do vetor e: %d", maior);
	
}

int main(){
	q1();
	
	return 0;
}

