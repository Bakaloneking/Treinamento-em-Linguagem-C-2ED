#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

const true=1;
void func0(void), func1(void), func2(void);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	void(*ptrf[3])(void);
	ptrf[0] = func0;
	ptrf[1] = func1;
	ptrf[2] = func2;
	do{
		int i;
		printf("0 - ABRIR\n");
		printf("1 - FECHAR\n");
		printf("2 - SALVAR\n");
		printf("\nEscolha um item: "); scanf("%d", &i);
		if(i<0||i>2){
			break;
		}
		(*ptrf[i])();
	}while(true);
	system("pause");
	return 0;
}

void func0(){
	printf("\n*** Estou em func0() ***\n");
}
void func1(){
	printf("\n*** Estou em func1() ***\n");
}
void func2(){
	printf("\n*** Estou em func2() ***\n");
}
