#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x=4, y=7;
	int *px,*py;
	printf("&x = %p\t x = %d\n", &x, x);
	printf("&y = %p\t y = %d\n", &y, y);
	px=&x;
	py=&y;
	printf("px = %p\t*px = %d\n", px, *px);
	printf("py = %p\t*py = %d\n", py, *py);
	
	system("pause");
	return 0;
}

