/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:44:53 by marvin            #+#    #+#             */
/*   Updated: 2024/09/16 19:44:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if(nb >= 1)
    {
        return(nb *ft_recursive_factorial(nb -1));
    }
    else if(nb > 0)
    {
        return(0);
    }
    else
    {
        return(1);
    }
} 