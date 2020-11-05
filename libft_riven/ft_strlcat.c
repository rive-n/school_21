/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekandaq <ekandaq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:50:23 by ekandaq           #+#    #+#             */
/*   Updated: 2020/11/05 15:50:23 by ekandaq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t					ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t				i;
    size_t				j;
    size_t				length;

    i = 0;
    j = 0;
    length = 0;
    while (dest[i] != '\0')
        i++;
    while (src[length] != '\0')
        length++;
    if (size <= i)
        length += size;
    else
        length += i;
    while (src[j] != '\0' && i + 1 < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (length);
}