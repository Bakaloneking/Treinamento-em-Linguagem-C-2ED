#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	unsigned int x=5, y=6;
	unsigned int *px,*py;
	px= &x;
	py= &y;
	if(px<py){
		printf("py-px= %u\n", (py-px));
	} else {
		printf("px-py= %u\n", (px-py));
	}
	printf("px=%p",px);
	printf(", *px=%u",*px);
	printf(", &px = %p\n", &px);
	printf("py=%p",py);
	printf(", *py=%u",*py);
	printf(", &py = %p\n", &py);
	py++;
	printf("py=%p",py);
	printf(", *py=%u",*py);
	printf(", &py = %p\n", &py);
	px=py+5;
	printf("px=%p",px);
	printf(", *px=%u",*px);
	printf(", &px = %p\n", &px);
	printf("px-py= %u\n", (px-py));
	system("pause");
	return 0;
}
