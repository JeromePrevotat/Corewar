/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_to_bytecode.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:47:03 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 17:30:39 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

char	*asm_to_bytecode(int fd)
{
	char	*bytecode;
	char	*line;
	int		type;

	while (get_next_line(fd, &line))
	{
		type = get_line_type(line);
		bytecode = process_line(line, type);
		ft_printf("PROCESSED : >%s<\n", bytecode);
		if (line != NULL)
			free(line);
	}
	if (line != NULL)
		free(line);
	return (bytecode);
}

int		get_line_type(char *line)
{
	int	type;

	type = -1;
	if (line[0] == ';' || line[0] == '\0')
		type = 0;
	if (is_instruction(line) == TRUE)
		type = 1;
	return (type);
}

char	*process_line(char *line, int type)
{
	if (type == ERROR)
		error(7);
	if (type == 0)
		return ("COM");
	if (type == 1)
		return (line);
	return ("");
}
