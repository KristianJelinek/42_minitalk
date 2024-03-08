/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:07:11 by kjelinek          #+#    #+#             */
/*   Updated: 2024/03/07 15:56:20 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************ */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
/*
int main(void)
{
	pid_t pid;

	printf("Fork here.\n");
	pid = fork();
	if (pid == -1)
	{
		return (1);
	}
	printf("\nFork successful!\n");
	if (pid == 0)
	{
		printf("Child: I'm the child, my internal pid is %d.\n", pid);
	}
	else if (pid > 0)
	{
		printf("Parent: I'm the parent, my child's pid is %d.\n", pid);
	}
	return(0);
}
void	child_routine(pid_t pid, int *nb)
{
	printf("Child: Hi! I'm the child. PID received from fork = %d\n", pid);
	printf("Child: The number is %d\n", *nb);
}

void	parent_routine(pid_t pid, int *nb)
{
	printf("Parent: I'm the parent. PID received from fork = %d\n", pid);
	printf("Parent: The number is %d\n", *nb);
	*nb *= 2;
	printf("Parent: The modified number is %d\n", *nb);
}

int	main(void)
{
	pid_t	pid;
	int	nb;

	nb = 42;
	printf("Before fork, the number is %d\n", nb);
	pid = fork();
	if (pid == -1)
		return (EXIT_FAILURE);
	else if (pid == 0)
		child_routine(pid, &nb);
	else if (pid > 0)
		parent_routine(pid, &nb);
	return (EXIT_SUCCESS);
}

int	main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
		return(1);
	if (pid == 0)
	{
		printf("Child: Yo soy Child XD, my internal PID is %d.\n", pid);
		sleep(1);
		printf("Child: Done! 😃 Luv ya XDD!\n");
	}
	else if (pid > 0)
	{
		printf("Parent: I am the Parent moohahaha, my child's PID is: %d.\n", pid);
		printf("Parent: Done! LOL!\n");
	}
	return(0);
}

int	main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
		return(1);
	if (pid == 0)
	{
		printf("Child: I am the child, my internal PID is: %d.\n", pid);
		printf("Done!\n");
	}
	else if (pid > 0)
	{
		printf("Parent: I am the parent, my child's PID is: %d. \n", pid);
		while (1)
		{
			usleep(1);
		}
		return(0);
	}
	
}
#ifndef CHILD_EXIT_CODE
# define CHILD_EXIT_CODE 42
#endif

#define EXPECTED_CODE 42

void	child_routine(pid_t pid)
{
	printf("\e[36mChild: Hi! I am le kidoo. PID recived from fork = %d\e[0m\n]]",
					pid);
	printf("\e[36mChild: Exiting with exit code %d.\e[0m\n]]",
					CHILD_EXIT_CODE);
	exit(CHILD_EXIT_CODE);
}

void	parent_routine(pid_t pid)
{
	int	status;

	printf("Le parent: I am the parentoo. PID recived from fork = %d\n", pid);
	printf("Le parent: Waiting for my kidoo bruh D: with PID [%d].\n", pid);
	waitpid(pid, &status, 0);
	printf("Le parent: My kidoo bruh D: exited D: with status %d\n", status);
	if (WIFEXITED(status))
	{
		printf("Le parent: My kidoo's exit code is %d\n",
							WEXITSTATUS(status));
		if (WEXITSTATUS(status) == EXPECTED_CODE)
			printf("Le parent: That's the code I expected XD\n");
		else
			printf("Le parent: I was not expecting that code bruh.... :|\n");
	}
}

int	main(void)
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		return(EXIT_FAILURE);
	else if (pid == 0)
		child_routine(pid);
	else if (pid > 0);
		parent_routine(pid);
	return(EXIT_SUCCESS);
}
*/
