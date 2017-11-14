/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:45:53 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 19:07:37 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

char	*process_instruction(char *line, int type)
{
	char	*bytecode;

	(void)line;
	bytecode = "0000";
	if (type == 1)
		bytecode = "0001";
	return (bytecode);
}
