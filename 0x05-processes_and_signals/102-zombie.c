#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - infinite while loop.
 * Return: Always 0 success.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}


/**
 * main - C program that creates 5 zombie processes..
 *For every zombie process created, it displays 
 *Zombie process created, PID: ZOMBIE_PID
 * Return: Always 0 success.
 */
int main(void)
{
	pid_t Zombie_pid;
	char counter = 0;

	while (counter < 5)
	{
		Zombie_pid = fork();
		if (Zombie_pid > 0)
		{
			printf("Zombie process created, PID:%d\n", Zombie_pid);
			sleep(1);
			counter++;
		}
		else
			exit(0);
	}

	infinite_while();
	return (EXIT_SUCCESS);
}
