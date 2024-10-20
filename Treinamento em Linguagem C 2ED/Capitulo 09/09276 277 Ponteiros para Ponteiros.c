#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define NOME_MAX 30
#define TAM_MAX 100

void ordena(char **p, int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char nomes[NOME_MAX][TAM_MAX];
	char *p[30];
	int n, i;
	for(n=0;;n++){
		printf("Digite nome ou [ENTER] para fim: "); gets(nomes[n]);
		if(strlen(nomes[n])==0){
			break;
		}
		p[n] = nomes[n];
	}
	printf("\n\n Lista original:\n");
	for(i=0;i<n;i++){
		printf("%s\n", p[i]);
	}
	ordena(p,n);
	printf("\n\nLista Ordenada:\n");
	for(i=0;i<n;i++){
		printf("%s\n", p[i]);
	}
	system("pause");
	return 0;
}

void ordena(char **p, int n){
	char *temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(strcmp(p[i],p[j])>0){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}
