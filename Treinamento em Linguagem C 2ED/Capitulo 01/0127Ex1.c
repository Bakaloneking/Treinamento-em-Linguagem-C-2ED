#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int cout, endl;
	printf("\tExistem %d semanas no ano.",52);
	cout << endl;
	system("PAUSE");
	return 0;
}
