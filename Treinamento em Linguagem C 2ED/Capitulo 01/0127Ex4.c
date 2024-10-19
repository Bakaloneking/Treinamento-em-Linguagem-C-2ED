#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n\tBom dia! Shirley.");
	printf("Você já tomou café?\n");
	printf("\n\nA solução não existe!\nNão insista.");
	printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
	printf("%s\n%s\n%s\n", "um", "dois", "três");
	system("pause");
}
