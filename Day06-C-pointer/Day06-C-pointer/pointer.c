#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	float* grades, sum = 0.0;

	printf("�л� ���� �Է��ϼ���: ");
	scanf("%d", &n);

	grades = (float*)malloc(n * sizeof(float));
	if (grades == NULL) {
		printf("�޸� �Ҵ� ����!\n");
		return 1;
	}

	printf("�� �л��� ������ �Է��ϼ���: \n");
	for (int i = 0; i < n; i++) {
		printf("�л� %d: ", i + 1);
		scanf("%f", &grades[i]);
		sum += grades[i];
	}

	printf("��� ����: %.2f\n", sum / n);

	free(grades);
	return 0;
}