/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:56:08 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 17:39:55 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/asm/asm.h"

int		main(int argc, char **argv)
{
	char	*bytecode;

	check_arg(argc, argv);
	bytecode = open_champ(argv[1]);
	//if (bytecode == NULL)
		//error(4);
	compile_champ(argv[1], bytecode);
	return (0);
}

char	*open_champ(char *file)
{
	int		fd;
	char	*bytecode;

	bytecode = NULL;
	if ((fd = open(file, O_RDONLY)) == ERROR)
		error(2);
	bytecode = asm_to_bytecode(fd);
	if (close(fd) == ERROR)
		error(3);
	return (bytecode);
}

void	compile_champ(char *s_name, char *bytecode)
{
	char	*c_name;

	bytecode = "YOLO";
	if ((c_name = get_c_name(s_name)) == NULL)
		error(-2);
	compile(c_name, bytecode);
	if (c_name != NULL)
	{
		free(c_name);
		c_name = NULL;
	}
}

void	compile(char *name, char *bytecode)
{
	int	fd;

	if ((fd = open(name, O_CREAT | O_RDWR | O_EXCL | O_APPEND, 0755)) == ERROR)
		error(5);
	if (write(fd, bytecode, ft_strlen(bytecode)) == ERROR)
		error(6);
	if (close(fd) == ERROR)
		error(3);
}

char	*get_c_name(char *s_name)
{
	char	*c_name;
	int		i;
	size_t	c_size;

	i = 0;
	c_size = ft_strlen(s_name) + 2;
	if (!(c_name = (char *)malloc(c_size * sizeof(char))))
		error(-2);
	ft_memset(c_name, '\0', c_size);
	ft_strncpy(c_name, s_name, ft_strlen(s_name) - 1);
	ft_strcat(c_name, "cor");
	return (c_name);
}
