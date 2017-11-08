/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:47:58 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/08 18:56:10 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int	main(int argc, char **argv)
{
	unsigned char **vm_mem;


	(void)argc;
	(void)argv;
	if (!((vm_mem) = (unsigned char **)malloc(REG_NUMBER *
		sizeof(unsigned char *))))
		return (ERROR);
	if (init_vm(vm_mem) == ERROR)
		error();
	free_vm_mem(vm_mem);
	return (0);
}

int	init_vm(unsigned char **vm_mem)
{
	int	i;

	i = 0;
	while (i < REG_NUMBER)
	{
		if (!(vm_mem[i] = (unsigned char *)malloc(REG_SIZE * sizeof(unsigned char))))
			error();
		ft_bzero(vm_mem[i], REG_SIZE);
		i++;
	}
	return (1);
}
