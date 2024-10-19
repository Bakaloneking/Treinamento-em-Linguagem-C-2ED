#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Temos outros modos de mostrar um numero como utilizando ''\n"
			"O valor da letra A entre '' é %d\n"
			"O valor do número 5 entre '' é %d\n"
			"O valor da letra a entre '' é %d\n"
			"O valor de \\n entre '' é %d\n"
			"O valor de \\t entre '' é %d\n", 'A','5','a','\n','\t' );
}
