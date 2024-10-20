#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 50

float media(float *, int);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float notas[TAM], m;
	int i=0;
	do{
		printf("Digite a nota do aluno %d: ", i+1); scanf("%f", notas+i);
	}while(*(notas + i++)>=0.0);
	i--;
	m=media(notas,i);
	printf("Média das notas: %.2f\n", m);
	
	system("pause");
	return 0;
}

float media(float *lista, int tamanho){
	int i;
	float m=0.0;
	for(i=0;i<tamanho;i++){
		m+=*(lista++);}
		return m/tamanho;
}
