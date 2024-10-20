#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,j,k;
	printf("Usa-se %%p para mostrar o endereço da variavel, declarando ela com &nomevariavel\n");
	printf("Endereço de i = %p\n", &i);
	printf("Endereço de j = %p\n", &j);
	printf("Endereço de k = %p\n", &k);
	system("pause");
	return 0;
}
