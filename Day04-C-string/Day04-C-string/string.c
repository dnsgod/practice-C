#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main() {
	char words[5][20] = { "apple", "banana", "cherry", "date", "elderberry" };
	char search[20];
	int found = 0;

	printf("�˻��� �ܾ �Է��ϼ���: ");
	scanf("%s", search);

	for (int i = 0; i < 5; i++) {
		if (strcmp(words[i], search) == 0) {
			printf("'%s' �ܾ �迭�� �ֽ��ϴ�.\n", search);
			found = 1;
			break;
		}
	}

	if (!found) {
		printf("'%s' �ܾ ã�� �� �����ϴ�.\n", search);
	}

	return 0;
}