#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	static int M[5]={92,81,70,69,58};
	int i, *p=M;
	for(i=0;i<5;i++){
		printf("%d\n", *(p++));
	}
	
	system("pause");
	return 0;
}
