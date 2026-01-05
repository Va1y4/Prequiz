#include <stdio.h>
int main() {
	char x, y;
	int Row, Column;
	scanf("%c %c %d %d", &x, &y, &Column, &Row);
	
	for(int i = 1; i <= Row; i++) {
		printf("\n");
		if(i % 2 == 1) {  // Odd rows: x first, then y
			for(int j = 1; j <= Column; j++) {
				printf("%c", x);
			}
			for(int k = 1; k <= Column; k++) {
				printf("%c", y);
			}
		}
		else {  // Even rows: y first, then x
			for(int j = 1; j <= Column; j++) {
				printf("%c", y);
			}
			for(int k = 1; k <= Column; k++) {
				printf("%c", x);
			}
		}
	}
	
	return 0;
}
