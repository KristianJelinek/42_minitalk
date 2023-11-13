/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:05:16 by k                 #+#    #+#             */
/*   Updated: 2023/11/13 16:06:57 by k                ###   ########.fr       */
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

int	create_server_socket()
{
	int	server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	if (server_socket == -1)
	{
		perror("Error in server socket creating!");
		exit(EXIT_FAILURE);
	}
	return (server_socket);
}