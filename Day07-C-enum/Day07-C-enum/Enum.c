#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

enum Grade { FRESHMAN = 1, SOPHMORE, JUNIOR, SENIOR };

struct Student {
	int id;
	char name[50];
	float grade;
	enum Grade year;
};

int main() {
	struct Student s1;

	printf("학번을 입력하세요: ");
	scanf("%d", &s1.id);
	printf("이름을 입력하세요: ");
	scanf("%s", s1.name);
	printf("성적을 입력하세요: ");
	scanf("%f", &s1.grade);
	printf("학년을 입력하세요 (1: 신입생, 2: 2학년, 3: 3학년, 4: 4학년): ");
	scanf("%d", (int*)&s1.year);
}