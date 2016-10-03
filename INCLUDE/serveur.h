/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serveur.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:41:47 by cgay              #+#    #+#             */
/*   Updated: 2015/02/24 19:14:56 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVEUR_H
# define SERVEUR_H

# include <stdlib.h>
# include <sys/socket.h>
# include <netdb.h>
# include <unistd.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include "libft.h"
# include <sys/types.h>
# include <dirent.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include "paquet.h"

# define C_CLEAR "\033[H\033[2J"
# define C_RESET "\033[0m"
# define C_BOLD "\033[1m"
# define C_REV "\033[7m"
# define C_RESET "\033[0m"
# define C_WHITE "\x1B[0m"
# define C_RED "\x1B[31m"
# define C_GREEN "\x1B[32m"
# define C_YELLOW "\x1B[33m"
# define C_BLUE "\x1B[34m"
# define C_MAGENTA "\x1B[35m"
# define C_CYAN "\x1B[36m"
# define C_GRAY "\033[22;37m"

int		ft_cd(int cs, char *dir);
void	ft_ls(int cs);
void	ft_pwd(int cs);
void	envoie_fichier(char *str, int sock);
void	put_file(char *str, int cs);
void	envoie_fichier_to_client(char *str, int cs);
void	ft_get(int cs, char *buf, t_list *paquet);
void	ft_put(int cs, char *buf, t_list *paquet);

#endif
