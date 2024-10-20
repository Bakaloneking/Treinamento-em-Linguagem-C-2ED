#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void doisbeep(void);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	void (*pf)(void);
	pf = doisbeep;
	(*pf)();
	
	system("pause");
	return 0;
}

void doisbeep(void){
	unsigned i;
	printf("\a");
	for(i=0;i<800000;i++){
		printf("\a");
	}
}
