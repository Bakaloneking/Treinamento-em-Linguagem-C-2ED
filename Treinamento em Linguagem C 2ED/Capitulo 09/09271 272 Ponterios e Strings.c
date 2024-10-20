#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

char * procura(char *,char);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char str[81], *ptr;
	printf("Digite um frase: "); gets(str);
	ptr=procura(str, 'h');
	printf("\nA frase começa no endereço %p\n", str);
	if(ptr){
		printf("\nPimeira ocorrência do caractere 'h': %p\n", ptr);
		printf("\nA sua posição é: %d\n", ptr-str);
	} else {
		printf("O caractere 'h' não existe nessa frase.\n");
	}
	
	system("pause");
	return 0;
}

char *procura(char *s,char ch){
	while(*s != ch && *s != '\0'){
		s++;
	}
	if(*s != '\0'){
		return s;
	}
	return(char *)0;
}
