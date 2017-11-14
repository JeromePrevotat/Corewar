/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:41:29 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/14 18:52:37 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

# include "../../libft/libft.h"

# define TRUE 1
# define FALSE 0
# define ERROR -1

/*
** Main.c
*/
char	*open_champ(char *file);
void	compile_champ(char *s_name, char *bytecode);
char	*get_c_name(char *s_name);
void	compile(char *name, char *bytecode);

/*
** Asm_to_bytecode.c
*/
char	*asm_to_bytecode(int fd);
int		get_line_type(char *line);
char	*process_line(char *line, int type);

/*
** Process_instruction.c
*/
char	*process_instruction(char *line, int type);

/*
** Check_arg.c
*/
void	check_arg(int argc, char ** argv);
int		is_asm(char *file_name);

/*
** Utils.c
*/
void	error(int err_num);
int		is_instruction(char *line);
char	**get_instructions_list(void);

/*
** Free_ressources.c
*/
void	free_split(char **split);

/*
** Error_handler.c
*/
char	*get_str_error(int err_num);

#endif
