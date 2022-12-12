#include<stdio.h>

typedef struct {
	int age;
	char name[16];
	float height;
} Profile;

int main() {
	FILE *pfin = fopen("test.dat", "rb");

	//reading only height
	long offset = (sizeof(Profile) - sizeof(float));
	float height;
	fseek(pfin, offset, SEEK_SET);
	fread(&height, sizeof(float), 1, pfin);

	fclose(pfin);
	printf("%f\n", height);

	return 0;
}