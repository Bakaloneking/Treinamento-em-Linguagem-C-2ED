#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Decimal %%d %d %d %d\n", 2345, 50, 88);
	printf("Hexadecimal %%x números de base 16 devese colocar 0x na frente do número %x %%X %X %%x %x\n", 0x41, 0x1afb, 0x54ca);
	printf("Octal %%o númeors de base 8 devese colocar 0 na frente do número %o %o %o\n", 041, 010, 0754);
	printf("Os numeros em Hexa se você declarar com %%d ficam: %d %d %d\n", 0x41, 0x1afb, 0x54ca);
	printf("Os números em Octa se você declarar com %%d ficam: %d %d %d\n", 041, 010, 0754);
}
