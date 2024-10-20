#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void func(char * (*)(char *));

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char *(*p)(char *);
	p = gets;
	func(p);
	
	system("pause");
	return 0;
}

void func(char * (*p)(char *)){
	char nome[80];
	printf("Digite seu nome: ");
	(*p)(nome);
	printf("Seu nome é: %s\n", nome);
}
