#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int i=1;
	printf("'%%c' = caractere simples.\n" 
			"'%%d' = Inteiro decimal com sinal.\n"
			"'%%i' = Inteiro decimal com sinal.\n"
			"'%%e' = Notação científica (e Minúsculo).\n"
			"'%%E' = Notação científica (E Maiúsculo).\n"
			"'%%f' = Ponto futluante em decimal.\n"
			"'%%g' = Usa %%e ou %%f, o que for menor.\n"
			"'%%G' = Usa %%E ou %%F, o que for menor.\n"
			"'%%o' = Inteiro octal sem sinal.\n"
			"'%%s' = String de caracteres.\n"
			"'%%u' = Inteiro decimal sem sinal.\n"
			"'%%x' = Inteiro hexadecimal sem sinal (Letras Minúsculas).\n"
			"'%%X' = Inteiro hexadecimal sem sinal (Letras Maiúsculas).\n"
			"'%%p' = Ponteiro (endereço).\n"
			"'%%n' = Ponteiro inteiro.\n"
			"'%%' = Imprime 1 caractere %%.\n");
	printf("Podemos adicionar l entre %% e os caracteres d, i, o, u e x, para informar que o tipo associado será long\n");
	printf("Podemos adicionar h entre %% e os caracteres d, i, o, u e x, para informar que o tipo associado será short\n");
	printf("Podemos adicionar L entre %% e os caracteres e, f,e g, para informar que o tipo associado será long double\n");
	return 0;
}
