#include <stdio.h>
#include <stdlib.h>

int main () {

	double num1;	
	double num2;
	char op;

	printf ("Welcome to calculator by XAH!\n");
	printf ("Enter a first number: ");
	scanf ("%lf", &num1);
	printf ("Enter a operator: ");
    scanf (" %c", &op);
	printf ("Enter a second number: ");  
	scanf ("%lf", &num2);
	
	if (op == '+') {
		printf ("%.1f", num1 + num2);
	} else if (op == '-') { 
		printf ("%.1f", num1 - num2);
	} else if (op == '/') {
        printf ("%.1f", num1 / num2);
	} else if (op == '*') {
        printf ("%.1f", num1 - num2);
	} else {	
		printf ("Invalid Operator! Please use these operators: +,-,/,*\n");
		main();	
	}

	return 0;
}

