#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//teste de criar material no cmd
int main(){
	setlocale(LC_ALL,"portuguese");
	int i=5;
//	system("dir");
	system("type nul > sera.txt");
	system("echo %d > sera.txt");
//	system("dir");
}
