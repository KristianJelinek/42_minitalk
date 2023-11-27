/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:05:16 by k                 #+#    #+#             */
/*   Updated: 2023/11/27 09:38:32 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
	int	id;
	id = fork();
	if (id == 0)
	{
		sleep(1);
	}
	printf("Current ID: %d, parent ID: %d\n", 
	getpid(), getppid());
	if (id != 0)
	{
		wait(NULL);
	}
	
	return (0);
}
