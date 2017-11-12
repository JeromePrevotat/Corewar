/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:47:58 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/11 15:43:55 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int		main(int argc, char **argv)
{
	t_vm	*vm;

	check_vm_arg(argc, argv);
	if (!(vm = (t_vm *)malloc(1 * sizeof(t_vm))))
		error(-2);
	init_vm(&vm, argc, argv);
	vm->mem[0] = 'J';
	vm->mem[1] = 'e';
	vm->mem[2] = 'E';
	vm->mem[3] = 'e';
	vm->mem[4] = 'J';
	vm->mem[32] = 1;
	ft_hexdump(vm->mem, vm->size, 32);
	free_vm(vm);
	return (0);
}

void	init_vm(t_vm **vm, int argc, char **argv)
{
	(void)argc;
	(*vm)->nbr_cycle = ft_atoi(argv[1]);
	(*vm)->size = 1024;
	if (!((*vm)->mem = (unsigned char *)malloc(
			(*vm)->size * sizeof(unsigned char))))
		error(-2);
	ft_bzero((*vm)->mem, (*vm)->size);
}
