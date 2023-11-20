/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:05:16 by k                 #+#    #+#             */
/*   Updated: 2023/11/20 14:30:53 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Creat server socket
//Receiving and processing signals from clients
//Processing incoming data
//Fast response

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>

int	createServerSocket()
{
	int	serverSocket;
	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	
	if (serverSocket == -1)
	{
		perror("Error in server socket creating!");
		exit(EXIT_FAILURE);
	}
	return (serverSocket);
}