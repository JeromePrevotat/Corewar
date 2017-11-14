/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:00:57 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 19:06:39 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

void	error(int err_num)
{
	char	*str;

	str = get_str_error(err_num);
	ft_putstr_fd("Error : ", 2);
	ft_putstr_fd(str, 2);
	exit(0);
}

int		is_instruction(char *line)
{
	char	**split;
	char	**instructions;
	int		i;

	i = 0;
	if ((instructions = get_instructions_list()) == NULL
		|| (split = ft_strsplit(line, ' ')) == NULL)
		error(-2);
	else if (split[0] == NULL)
		return (ERROR);
	while (i < 16)
	{
		if (ft_strcmp(split[0], instructions[i]) == 0)
		{
			free(instructions);
			free_split(split);
			return (i);
		}
		i++;
	}
	free(instructions);
	free_split(split);
	return (ERROR);
}

char	**get_instructions_list(void)
{
	char	**instructions;

	if (!(instructions = (char **)malloc(16 * sizeof(char *))))
		return (NULL);
	instructions[0] = "live";
	instructions[1] = "ld";
	instructions[2] = "st";
	instructions[3] = "add";
	instructions[4] = "sub";
	instructions[5] = "and";
	instructions[6] = "or";
	instructions[7] = "xor";
	instructions[8] = "zjmp";
	instructions[9] = "ldi";
	instructions[10] = "sti";
	instructions[11] = "fork";
	instructions[12] = "lld";
	instructions[13] = "lldi";
	instructions[14] = "lfork";
	instructions[15] = "aff";
	return (instructions);
}
