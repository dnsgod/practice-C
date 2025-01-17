#pragma warning(disable: 4996)
#include <stdio.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	FILE* fp;
	struct Student s;

	fp = fopen("Students.txt", "w");
	if (fp == NULL) {
		printf("File load failed!\n");
		return 1;
	}

	printf("Input name, age, grade: ");
	scanf("%s %d %f", s.name, &s.age, &s.grade);

	fprintf(fp, "name: %s\nage: %d\ngrade: %.2f\n", s.name, s.age, s.grade);
	fclose(fp);

	fp = fopen("students.txt", "r");
	if (fp == NULL) {
		printf("File load failed!\n");
		return 1;
	}

	char line[100];
	printf("\nRead on file:\n");
	while (fgets(line, sizeof(line), fp)) {
		printf("%s", line);
	}

	fclose(fp);
	return 0;
}