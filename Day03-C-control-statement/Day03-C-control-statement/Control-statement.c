#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;

    srand(time(NULL));  // ���� ���� �ʱ�ȭ
    target = rand() % 100 + 1;  // 1~100 ������ ���� ����

    printf("1���� 100 ������ ���ڸ� ����������!\n");

    while (1) {
        printf("���ڸ� �Է��ϼ���: ");
        scanf("%d", &guess);

        if (guess > target) {
            printf("�� ���� �����Դϴ�.\n");
        } 
        else if (guess < target) {
            printf("�� ū �����Դϴ�.\n");
        } 
        else {
            printf("�����Դϴ�! ���ڴ� %d�����ϴ�.\n", target);
            break;
        }
    }

    return 0;
}
