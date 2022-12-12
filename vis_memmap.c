#include<stdio.h>
#include<stdlib.h>

int ex1 = 532;	//　大域変数（初期値あり）
int ex2;	//　大域変数（初期値なし）

int main(){
	static int st1 = 100;	//　静的変数（初期値あり）
	static int st2;	//　静的変数（初期値なし）
	int local = 0;	//　内部変数
	static char array_static[1024];	//　静的変数の配列（静的確保）
	char array_local[1024];	//　内部変数の配列（静的確保）
	char *array_dynamic;
	
	array_dynamic = (char *) malloc(1024);	//　内部変数の配列（動的確保）
	
	printf("----- variables -----\n");
	printf("ex1		:%8x\n", &ex1);
	printf("ex2		:%8x\n", &ex2);
	printf("st1		:%8x\n", &st1);
	printf("st2		:%8x\n", &st2);
	printf("local		:%8x\n", &local);
	printf("----- arrays -----\n");
	printf("array_stastic	:%8x\n", array_static);
	printf("array_local	:%8x\n", array_local);
	printf("*array_dynamic	:%8x\n", &array_dynamic);
	printf("array_dynamic	:%8x\n", array_dynamic);
	printf("----- functions -----\n");
	printf("main		:%8x\n", main);
	printf("printf		:%8x\n", printf);
}
	
	
