#include <stdio.h>

void tortoise_and_hare_message(void) __attribute__((constructor));

/**
 * tortoise_and_hare_message - prints the message before main
 */
void tortoise_and_hare_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
