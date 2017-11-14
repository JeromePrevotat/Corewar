/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_ressources.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:28:28 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 17:29:23 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (split != NULL)
	{
		while (split[i] != NULL)
		{
			free(split[i]);
			split[i] = NULL;
			i++;
		}
		free(split);
		split = NULL;
	}
}
