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

	printf("�й��� �Է��ϼ���: ");
	scanf("%d", &s1.id);
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", s1.name);
	printf("������ �Է��ϼ���: ");
	scanf("%f", &s1.grade);
	printf("�г��� �Է��ϼ��� (1: ���Ի�, 2: 2�г�, 3: 3�г�, 4: 4�г�): ");
	scanf("%d", (int*)&s1.year);
}