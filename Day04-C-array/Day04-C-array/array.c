#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("5���� ���ڸ� �Է��ϼ���:\n");

    for (int i = 0; i < 5; i++) {
        printf("���� %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("�հ�: %d\n", sum);

    return 0;
}
