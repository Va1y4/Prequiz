#include <stdio.h>
int main() {
	int Salary,Credit,Age;
	scanf("%d %d %d", &Salary, &Credit, &Age);
	if (Salary >= 20000 && Credit >= 700 && Age >= 21) {
		printf("approved");
	}
	else if (Salary >=10000 && Credit >= 800 && Age >=21) {
		printf("approved");
	} else {
		printf("not approved");
	}
	
	
	
	return 0;
}
