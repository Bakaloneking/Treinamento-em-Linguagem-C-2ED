#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int binarySearchStr(char *MatrizOrdenada[], int inicio, int fim, char *chave);
int cstring_cmp(const void *a, const void *b);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	unsigned int tamanho, i, procura;
	char *strings[]={"Zuleima","Andre","Carolina","Beto","Denise"};
	tamanho = sizeof(strings)/sizeof(char *);
	puts("Matriz Original");
	for(i=0;i<tamanho;i++){
		printf("%s\n", strings[i]);
	}
	qsort(strings, tamanho, sizeof(char *), cstring_cmp);
	puts("Matriz Ordenada");
	for(i=0;i<8;i++){
		printf("%s\n", strings[i]);
	}
	procura = binarySearchStr(strings, 0, 5, "Carolina");
	printf("\n\nÍndice de Carolina = %d\n", procura);
	
	system("pause");
	return 0;
}

int binarySearchStr(char *MatrizOrdenada[], int inicio, int fim, char *chave);
	while(inicio <= fim){
		int meio = (inicio+fim)/2;
		int cmp = strcmp(chave, MatrizOrdenada[meio]);
		if(cmp>0){
			inicio = meio +1;
		} else if(cmp<0){
			fim = meio -1;
		} else {
			return meio;
		}
	}
	return -1;
}

int compara(const void *a, const void *b){
	const char **pa =(const char **)a;
	const char **pb =(const char **)b;
	return*pa - *pb;
}
