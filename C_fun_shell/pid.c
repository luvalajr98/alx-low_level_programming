#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - PID- process ID
 *
 * Return: Always 0.
 */

int main (void)

{

	pid_t my_ppid;
	
	my_ppid = getpid();
	printf("%u\n", my_ppid);
	return(0);
}
