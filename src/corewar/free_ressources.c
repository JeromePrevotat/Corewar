/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_ressources.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:03:27 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/08 18:56:42 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

void free_vm_mem(unsigned char **vm_mem)
{
	int	i;

	i = 0;
	if (vm_mem == NULL)
		return ;
	while (i < REG_NUMBER)
	{
		if (vm_mem[i] != NULL)
		{
			free(vm_mem[i]);
			vm_mem[i] = NULL;
		}
		i++;
	}
	free(vm_mem);
	vm_mem = NULL;
}
