#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("�迭 ũ�⸦ �Է��ϼ���: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    printf("[DEBUG] �迭 ũ��: %d\n", n);

    printf("�迭 ���� �Է��ϼ���:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("�Է��� �迭 ��:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    free(arr);
    printf("[DEBUG] �޸� ���� �Ϸ�\n");
    return 0;
}
