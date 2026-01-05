#include <stdio.h>
int main() {
	int Salary,Credit,Age;
	scanf("%d %d %d", &Salary, &Credit, &Age);
	if(Salary >= 20000) {
		if(Credit >= 700 && Age >= 21) {
			printf("approved");
		}
		else if(Credit < 700 && Age >= 21) {
			printf("not approved:credit<700");
		}
		else if(Credit >= 700 && Age < 21) {
			printf("not approved:age<21");
		}
	}
	if(Salary >= 10000 && Salary <= 20000) {
		if(Credit >= 800 && Age >= 21) {
			printf("approved");
		}
		else if(Credit < 800 && Age >= 21) {
			printf("not approved:credit<800");
		}
		else if(Credit >= 800 && Age < 21) {
			printf("not approved:age<21");
		}	
	}
	if(Salary < 20000 && Credit >= 700 && Credit < 800) {
		printf("not approved:salary<20000");
	}
	else if (Salary < 10000 && Credit >= 800) {
		printf("not approved:salary<10000");
	}
	
	
	
	return 0;
}
