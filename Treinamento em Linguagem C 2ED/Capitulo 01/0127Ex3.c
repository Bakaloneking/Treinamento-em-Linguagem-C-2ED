#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int a=1, b=2, c=3;
	printf("Os números são: %d%d%d\n", a, b, c);
	system("pause");
}
