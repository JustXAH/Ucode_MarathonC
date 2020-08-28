#include <stdio.h>
	

	int main()	{

		
	int a = 0;
		scanf ("%d", &a);
		
		if (a == 1) 
		{
			printf ("\nМышь голодная! Что ей делать?\n");		
	
			for (int i = 0; i <= 5; i++)
			{
				printf ("Найти еду! Сьесть еду!: %d\n", i);
			}
		main();
		}

		else if (a > 1)
		{
			printf ("Мышь сыта и спит!\n");
			main();
		}

	
		else 	
		{
			
			printf ("МЫШИ НЕ СУЩЕСТВУЕТ!\n");
			sleep(3);
			return(0);
		}	

}

