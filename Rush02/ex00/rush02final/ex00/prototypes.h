/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:14:26 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 19:12:56 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PROTOTYPES_
#define _PROTOTYPES_

/* check.c // Check the availibilty of the input */

int     ft_check_input(char *str);
char    ft_power(int power);

/* string.c || Modifies the input by pack of 3 */
void    str_send_cuted(char *str, int str_len, int fd);

/* translate.c || Takes the pack and converts them from digit to words */

char    ft_print_units(char units, int file);
char    ft_print_tens(char tens, int file);
char    ft_print_hundreds(char unit, int file);
void    ft_decompose(char *str,  int file);
void    fr_print_power(char power, int file);

/* print.c || Display of the needed elements */

void    ft_print_error(void);
void    ft_putchar(char c);
void    ft_pustring(char *str);
void    ft_print_error_dic();

#endif



