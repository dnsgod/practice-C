#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("배열 크기를 입력하세요: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("[DEBUG] 배열 크기: %d\n", n);

    printf("배열 값을 입력하세요:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("입력한 배열 값:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    free(arr);
    printf("[DEBUG] 메모리 해제 완료\n");
    return 0;
}
