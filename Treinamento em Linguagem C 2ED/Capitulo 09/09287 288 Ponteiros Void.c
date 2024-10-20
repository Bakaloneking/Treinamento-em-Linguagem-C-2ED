#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	
	int i=5, *pi;
	float f=3.2, *pf;
	void *pv;
	pv=&i;
	pi=(int *)pv;
	printf("%d\n", *pi);
	pv=&f;
	pf=(float *)pv;
	printf("%f\n", *pf);
	system("pause");
	return 0;
}
