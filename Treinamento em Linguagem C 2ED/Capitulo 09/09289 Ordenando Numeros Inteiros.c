#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int compara(const void *a, const void *b);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	unsigned int tamanho, i;
	int tab[]={234,760,162,890,-23,914,567,888,398,-45};
	tamanho = sizeof(tab)/sizeof(int);
	qsort(tab,tamanho,sizeof(int),compara);
	for(i=0;i<8;i++){
		printf("%d\n", tab[i]);
	}
	
	system("pause");
	return 0;
}

int compara(const void *a, const void *b){
	const int *pa = (const int *)a;
	const int *pb = (const int *)b;
	return *pa - *pb;
}
