#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,j,k;
	printf("Usa-se %%p para mostrar o endere�o da variavel, declarando ela com &nomevariavel\n");
	printf("Endere�o de i = %p\n", &i);
	printf("Endere�o de j = %p\n", &j);
	printf("Endere�o de k = %p\n", &k);
	system("pause");
	return 0;
}
