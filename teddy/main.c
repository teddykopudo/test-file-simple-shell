#include "main.h"

void init_tashell()
{
	clear();
	printf("\n\n\n\n******************"
			"************************");
	printf("\n\n\n\t****TA SHELL****");
	printf("\n\n\t-STILL IN BETA-");
	printf("\n\n\n\n******************"
			"***********************");
	char* username = getenv("USER");
	printf("\n\n\nUSER is: @%s", username);
	printf("\n");
	sleep(1);
	clear();
}
