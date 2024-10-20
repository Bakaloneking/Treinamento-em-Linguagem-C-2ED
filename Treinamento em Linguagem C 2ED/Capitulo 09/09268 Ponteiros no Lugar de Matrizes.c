#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	static int M[5]={92,81,70,69,58};
	int i;
	for(i=0;i<5;i++){
		printf("%d\n", M[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d\n", *(M+i));
	}
	
	system("pause");
	return 0;
}
