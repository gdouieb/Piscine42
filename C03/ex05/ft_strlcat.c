/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:44:26 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/27 00:25:23 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (dest[dest_len] != '\0')
		dest_len++;
	if (size < dest_len)
		return (size + src_len);
	while (size > (dest_len + i) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
		size--;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
