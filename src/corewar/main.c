/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:47:58 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/09 11:22:05 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int	main(int argc, char **argv)
{
	unsigned char **vm_mem;


	(void)argc;
	(void)argv;
	if (check_reg_attributes() == ERROR)
		error();
	if (!((vm_mem) = (unsigned char **)malloc(REG_NUMBER *
		sizeof(unsigned char *))))
		return (ERROR);
	if (init_vm(vm_mem) == ERROR)
		error();
	vm_mem[0][0] = 'J';
	vm_mem[0][1] = 'e';
	vm_mem[0][2] = 'E';
	vm_mem[0][3] = 'e';
	vm_mem[0][4] = 'J';
	vm_mem[0][5] = 1;
	vm_mem[1][6] = 15;
	vm_mem[2][7] = 16;
	print_vm_mem(vm_mem);
	free_vm_mem(vm_mem);
	return (0);
}

int	init_vm(unsigned char **vm_mem)
{
	int	i;

	i = 0;
	while (i < REG_NUMBER)
	{
		if (!(vm_mem[i] = (unsigned char *)malloc(REG_SIZE *
			sizeof(unsigned char))))
			error();
		ft_bzero(vm_mem[i], REG_SIZE);
		i++;
	}
	return (1);
}
