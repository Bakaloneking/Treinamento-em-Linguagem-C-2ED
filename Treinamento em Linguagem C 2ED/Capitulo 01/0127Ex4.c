#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n\tBom dia! Shirley.");
	printf("Voc� j� tomou caf�?\n");
	printf("\n\nA solu��o n�o existe!\nN�o insista.");
	printf("Duas\tlinhas\tde\tsa�da\nou\tuma?");
	printf("%s\n%s\n%s\n", "um", "dois", "tr�s");
	system("pause");
}
