/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:47:58 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/09 20:42:38 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int	main(int argc, char **argv)
{
	unsigned char	**vm_mem;
	unsigned int	nbr_cycle;
	void			*pc;

	(void)argv;
	if (argc < 3 || ft_atoi(argv[1]) < 1)
		error();
	pc = NULL;
	if (check_reg_attributes() == ERROR)
		error();
	if (!(vm_mem = (unsigned char **)malloc(REG_NUMBER *
		sizeof(unsigned char *))))
		return (ERROR);
	if (init_vm(vm_mem) == ERROR)
		error();
	nbr_cycle = 0;
	vm_mem[0][0] = 'J';
	vm_mem[0][1] = 'e';
	vm_mem[0][2] = 'E';
	vm_mem[0][3] = 'e';
	vm_mem[0][4] = 'J';

	vm_mem[1][5] = 'Y';
	vm_mem[1][6] = 'O';
	vm_mem[1][7] = 'L';
	vm_mem[1][8] = 'O';
	vm_mem[1][9] = '!';

	while (nbr_cycle != (unsigned int)ft_atoi(argv[1]))
	{
		//exec();
		ft_printf("Cycle : %d\n", nbr_cycle);
		nbr_cycle++;
	}
	ft_printf("\nVM_MEM : ");
	print_vm_mem(vm_mem);

	/*
	** Register that contains the adress of next instruction in vm_mem
	*/
	pc = &vm_mem[0][0];
	ft_printf("\nPC : %p\n", pc);
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
