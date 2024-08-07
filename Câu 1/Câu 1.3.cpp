#include <stdio.h>
#include <stdlib.h>

int main() {
	char ten[] = "Pham Tan Dat";
	int i;
	int chuaKyTuHoa = 0;

	for (i = 0; ten[i] != '\0'; i++) {
		if (ten[i] >= 'A' && ten[i] <= 'Z') {
			chuaKyTuHoa = 1;
			break;
		}
	}

	if (chuaKyTuHoa) {
		printf("Chuoi chua ky tu hoa.\n");
	}
	else {
		printf("Chuoi khong chua ky tu hoa.\n");
	}

	system("pause");

	return 0;
}