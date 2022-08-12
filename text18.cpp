#include <stdio.h>
int main()
{
	char letter;
	while (1)
	{
		scanf("%c", &letter);
	
		switch(letter)
		{
			case 'a':
				printf("alpha\n");
				break;
			case 'b':
				printf("bravo\n");
				break;
			default:
				printf("i don't know\n");
				break;
				

		}
		
	}




	return 0;



}