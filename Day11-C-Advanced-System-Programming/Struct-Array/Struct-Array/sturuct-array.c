#include <stdio.h>

struct Student {
	int id;
	char name[50];
	float grade;
};

int main() {
	struct Student students[3] = {
		{1, "Alice", 3.8},
		{2, "Bob", 3.5},
		{3, "Charlie", 3.9}
	};

	for (int i = 0; i < 3; i++) {
		printf("ID: %d, 이름: %s, 성적: %.2f\n", students[i].id, students[i].name, students[i].grade);
	}

	return 0;
}