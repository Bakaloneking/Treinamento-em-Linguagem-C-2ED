#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("\n%s\n%6s\n%9s","um","dois","três");
	return 0;
}
