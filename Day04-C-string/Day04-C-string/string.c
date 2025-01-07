#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main() {
	char words[5][20] = { "apple", "banana", "cherry", "date", "elderberry" };
	char search[20];
	int found = 0;

	printf("검색할 단어를 입력하세요: ");
	scanf("%s", search);

	for (int i = 0; i < 5; i++) {
		if (strcmp(words[i], search) == 0) {
			printf("'%s' 단어가 배열에 있습니다.\n", search);
			found = 1;
			break;
		}
	}

	if (!found) {
		printf("'%s' 단어를 찾을 수 없습니다.\n", search);
	}

	return 0;
}