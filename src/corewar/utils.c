/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:34:49 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/09 11:22:29 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

int		ft_hexdump(void *mem, int printed)
{
	unsigned char	*tmp;
	int				i;

	i = 0;
	tmp = (unsigned char *)mem;
	while (i < REG_SIZE)
	{
		if (printed == REG_SIZE * 2 || printed == 0)
		{
			ft_printf("\n");
			printed = 0;
		}
		if (printed % 2 == 0 && printed != 0)
			ft_printf(" ");
		if (*(tmp + i) < 0x10)
			printed += ft_printf("0");
		printed += ft_printf("%X", *(tmp + i));
		i++;
	}
	return (printed);
}

void	print_vm_mem(unsigned char **vm_mem)
{
	int	i;
	int	printed;

	i = 0;
	printed = 0;
	if (vm_mem == NULL)
		error();
	while (i < REG_NUMBER)
	{
		ft_printf(GREEN"\n\nREGISTRE %d : "RESET, i);
		printed = ft_hexdump(vm_mem[i], printed);
		i++;
	}
}

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}
