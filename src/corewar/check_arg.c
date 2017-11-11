/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:54:10 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/11 14:54:27 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/corewar/corewar.h"

void	check_vm_arg(int argc, char **argv)
{
	if (argc < 3)
		error(0);
	if (ft_atoi(argv[1]) < 1)
		error(1);
	check_champ_arg(argc, argv);
}

void	check_champ_arg(int argc, char **argv)
{
	int		i;
	char	**split;

	i = 2;
	while (i < argc)
	{
		if (!(split = ft_strsplit(argv[i], ' ')))
			error(-2);
		check_champ_split(split);
		free_split(split);
		i++;
	}
}

void	check_champ_split(char **split)
{
	int	split_size;

	split_size = 0;
	while (split[split_size] != NULL)
		split_size++;
	if (split_size != 1 && split_size != 3)
		error(3);
	if (split_size == 1)
	{
		if (is_cor(split[0]) == FALSE)
			error(4);
	}
	if (split_size == 3)
	{
		if (ft_strcmp(split[0], "-n") != 0
			|| ft_str_isdigit(split[1]) == FALSE
			|| is_cor(split[2]) == FALSE)
			error(4);
	}
}
