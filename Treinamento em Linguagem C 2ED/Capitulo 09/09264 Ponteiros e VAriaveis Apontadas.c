#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x,y;
	int *px=&x;
	*px=14;
	y=*px;
	printf("y=%d\n",y);
	
	system("pause");
	return 0;
}
