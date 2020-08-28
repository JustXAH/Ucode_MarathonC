#include <stdio.h>
#include <stdlib.h>

int main()
{

        char speak [20];
        int hello, howAreYou;

                scanf("%s", &speak);

        if (speak == "hello" | hello == 0)
	{
		printf ("Hello, User!\n");
		hello++;
		main();
	}

	
	if (speak == "hello" | hello == 1)
        {
                printf ("Hello?!\n");
                hello++;
		main();
        }
		
	
	if (speak == "hello" | hello == 2)
        {
                printf ("Fu** Off!\n");
                hello++;
		main();
        }

	
	
	if (speak == "howAreYou" | howAreYou == 0)
        {
                printf ("Fine! And you?\n");
                howAreYou++;
		main();
        }
	

	if (speak == "howAreYou" | howAreYou == 1)
        {
                printf ("Are you serios?\n");
                howAreYou++;
		main();
        }


	if (speak == "howAreYou" | howAreYou == 2)
        {
                printf ("OMG!!!\n");
                howAreYou++;
		main();
        }


	if (speak == "GoodBye")
        {
                printf ("See you!\n");
                exit(3);

        }


	else 
	{
                printf ("What?\n");
		main();
        }
}

