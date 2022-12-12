#include <stdio.h>

int main()
{
	int age = 19;
	char name[15] = "";
	float height = 164.0;

	FILE *pfout = fopen("test.dat", "wb");

	// バイナリ書き込み
	fwrite(&age, sizeof(int), 1, pfout);
	fwrite(name, sizeof(name), 1, pfout);
	fwrite(&height, sizeof(float), 1, pfout);

	fclose(pfout);
	return 0;
}
