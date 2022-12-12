#include<stdio.h>

typedef struct {
	int age;
	char name[15];
	float height;
} Profile;

int main() {
	FILE *pfin = fopen("test.dat", "rb");

	//reading struct
	Profile profile;
	fread(&profile, sizeof(Profile), 1, pfin);

	fclose(pfin);

	printf("%d %s %f \n", profile.age, profile.name, profile.height);

	return 0;
}