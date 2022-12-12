#include<stdio.h>

int main() {
	int age = 28;
	char name[] = "Sasayama Raiga";
	float height = 163.0;
	FILE* pfout = foprn("test.dat", "wb");

	//writing binary
	fwrite(&age, sizeof(int), 1, pfout);
	fwrite(name, sizeof(name), 1, pfout);
	fwrite(&height, sizeof(float), 1, pfout);

	fclose(pfout);

	return 0;
}

