#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	float* grades, sum = 0.0;

	printf("학생 수를 입력하세요: ");
	scanf("%d", &n);

	grades = (float*)malloc(n * sizeof(float));
	if (grades == NULL) {
		printf("메모리 할당 실패!\n");
		return 1;
	}

	printf("각 학생의 성적을 입력하세요: \n");
	for (int i = 0; i < n; i++) {
		printf("학생 %d: ", i + 1);
		scanf("%f", &grades[i]);
		sum += grades[i];
	}

	printf("평균 성적: %.2f\n", sum / n);

	free(grades);
	return 0;
}