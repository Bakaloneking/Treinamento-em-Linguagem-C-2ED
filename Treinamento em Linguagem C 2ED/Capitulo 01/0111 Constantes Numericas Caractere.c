#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Temos outros modos de mostrar um numero como utilizando ''\n"
			"O valor da letra A entre '' � %d\n"
			"O valor do n�mero 5 entre '' � %d\n"
			"O valor da letra a entre '' � %d\n"
			"O valor de \\n entre '' � %d\n"
			"O valor de \\t entre '' � %d\n", 'A','5','a','\n','\t' );
}
