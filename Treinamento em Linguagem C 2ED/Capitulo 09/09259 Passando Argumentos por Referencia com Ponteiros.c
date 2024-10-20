#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void reajusta20(float *, float *);

int main(){
	setlocale(LC_ALL,"portuguese");
	float val_preco, val_reaj;
		do{
			printf("Insira o preço atual: ");
			scanf("%f", &val_preco);
			if(val_preco == 0){
				break;
			}
			reajusta20(&val_preco, &val_reaj);
			printf("\nO preço novo é %.2f\n", val_preco);
			printf("O aumento foi de %.2f\n", val_reaj);
		}while(val_preco != 0.0);
	system("pause");
	return 0;
}

void reajusta20(float *preco, float *reajuste){
	*reajuste = *preco * 0.2;
	*preco *= 1.2;
}
