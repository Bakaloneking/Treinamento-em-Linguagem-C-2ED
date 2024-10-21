#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int binarySearchInt(int MatrizOrdenada[], int inicio, int fim, int chave);
int compara(const void *a, const void *b);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	unsigned int tamanho, i, procura;
	int tab[]={234,760,162,890,-23,914,567,888,398,-45};
	printf("\nMatriz Original\n");
	for(i=0;i<8;i++){
		printf("%d\n", tab[i]);
	}
	tamanho = sizeof(tab)/sizeof(int);
	qsort(tab, tamanho, sizeof(int), compara);
	printf("\nMatriz Ordenada\n");
	for(i=0;i<8;i++){
		printf("%d\n", tab[i]);
	}
	procura = binarySearchInt(tab, 0, tamanho -1, 567);
	printf("\n\nÍndice de 567 = %d\n", procura);
	
	system("pause");
	return 0;
}

int binarySearchInt(int MatrizOrdenada[], int inicio, int fim, int chave){
	while(inicio<=fim){
		int meio = (inicio+fim)/2;
		if(chave>MatrizOrdenada[meio]){
			inicio = meio +1;
		} else if(chave<MatrizOrdenada[meio]){
			fim = meio -1;
		} else {
			return meio;
		}
	}
	return -1;
}

int compara(const void *a, const void *b){
	const int *pa =(const int *)a;
	const int *pb =(const int *)b;
	return*pa - *pb;
}
