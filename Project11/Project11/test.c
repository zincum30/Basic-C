#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x = 0;
	int y = 0;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0) {
		if (y > 0) {
			printf("1");
		}
		else if (y < 0) {
			printf("4");
		}
	}
	else if (x < 0) {
		if (y > 0) {
			printf("2");
		}
		else if (y < 0) {
			printf("3");
		}
	}





	return 0;
}