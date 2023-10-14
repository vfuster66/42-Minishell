/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:20:43 by vfuster-          #+#    #+#             */
/*   Updated: 2023/10/14 17:36:27 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	builtin_pwd()
{
	char	current_directory[1024];

	if (getcwd(current_directory, sizeof(current_directory)) != NULL)
		printf("%s\n", current_directory);
	else
		perror("pwd");
}
