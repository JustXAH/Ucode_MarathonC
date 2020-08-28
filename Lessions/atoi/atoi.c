#include <stdio.h>
#include <stdlib.h>

	int main(void) {	

	char n1[80], n2[80];
		
		printf("Enter first number: ");
		scanf ("%d\n", &n1);
		atoi(n1);
		printf("Enter second number: ");
		atoi(n2);
		scanf ("%d\n", &n2);
		printf("The sum is: %d\n", (n1 + n2));
		return 0;
}

