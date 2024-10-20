#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int dsemana(int , int, int);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	static char *diasemana[7]={"Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sábado"};
	int dia, mes, ano;
	const char ESC = 27;
	do{
		printf("Digite a data na forma dd mm aaaa: "); scanf("%d%d%d", &dia, &mes, &ano);
		printf("%s\n", diasemana[dsemana( dia, mes, ano)]);
		printf("ESC para terminar ou ENTER para recomeçar\n");
	}while(getch() != ESC);
		
	system("pause");
	return 0;
}

int dsemana(int dia, int mes, int ano){
	int dSemana = ano + dia + 3 * (mes-1)-1;
	if(mes<3){
		ano--;
	} else {
		dSemana -= (int)(0.4*mes+2.3);
	}
	dSemana += (int)(ano/4)-(int)((ano/100+1)*0.75);
	dSemana %=7;
	return dSemana;
}
