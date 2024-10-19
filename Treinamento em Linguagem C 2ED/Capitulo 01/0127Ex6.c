#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("%c%c%cPrimeiro programa", '\n','\t','\"');
	printf("%c",'\"');
	system("pause");
}
