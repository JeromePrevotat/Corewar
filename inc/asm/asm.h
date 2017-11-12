/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:41:29 by jprevota          #+#    #+#             */
/*   Updated: 2017/11/12 18:46:13 by jprevota         ###   ########.fr       */
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
** Check_arg.c
*/
void	check_arg(int argc, char ** argv);
int		is_asm(char *file_name);

/*
** Utils.c
*/
void	error(int err_num);

/*
** Error_handler.c
*/
char	*get_str_error(int err_num);

#endif
