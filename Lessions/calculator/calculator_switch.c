#include <stdio.h>
#include <stdlib.h> 

int main () {
	printf ("\n\t\t\tWelcome to the Calculator 2.0 by XAH\n\n");
	printf ("Description:\nYou can use four calculation operations: addition, subtraction, multiplication and division.\n\nManual:\n25.3 + 64.2 = 89.5\n");
	calc (); 
	    }

void quit () {
        char *answer [5];
       		printf ("Do you want to use calculator again? (Yes/No): ");
        	scanf ("%s", &answer);
		if (strcmp(answer, "Yes") == 0)
        	calc ();
          	else if (strcmp(answer, "No") == 0)
                exit (3);
                else {
                printf ("Invalid answer! Please, answer 'Yes' or 'No");
                quit (1);
                     }
	    }
int calc () {
	double num1, num2;
	char op;
	double fun;
		printf ("Enter the first number: ");
		scanf ("%lf", &num1);
		printf ("Enter the operator: ");
                scanf ("%s", &op);
		printf ("Enter the second number: ");
                scanf ("%lf", &num2);
			switch (op) {
				case '+':
					fun = num1 + num2;
					printf ("%.2lf + %.2lf = %.2lf\n", num1, num2, fun);
					break;
				case '-':
                                        fun = num1 - num2;
                                        printf ("%.2lf - %.2lf = %.2lf\n", num1, num2, fun);
                                        break;
				case '*':
                                        fun = num1 * num2;
                                        printf ("%.2lf * %.2lf = %.2lf\n", num1, num2, fun);
                                        break;	
				case '/':
                                        fun = num1 / num2;
                                        printf ("%.2lf / %.2lf = %.2lf\n", num1, num2, fun);
                                        break;
	    		   	    } 
				quit (); 
}

