/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemaake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:33:14 by lemaake           #+#    #+#             */
/*   Updated: 2020/07/16 16:35:37 by lemaake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>


void    ft_putchar(char c);

void    horizontal(int x, char left, char centre, char right)
{
    if ( x >= 1)
    {
        ft_putchar(left);
        while (x >= 2)
        {
            ft_putchar(centre);
        }
         if ( x >= 3)
        {
            ft_putchar(right);
        }
        ft_putchar("\n");
    }

void    vertical(int x, int y, char sides);
{
    int        i;

    i = 2;
    while(y > 2)
    {
        ft_putchar(sides);
        while(x > i)
        {
            ft_putchar(' ');
            i++;
        }
        ft_putchar(sides);
        ft_putchar("\n");
    }
}

// creating square
void    rush(int x, int y)
{
    if (y >= 1)
    {
        horizontal(x, 'o', '-', 'o');
        vertical(x, y, '|');
    }
    
    else if (y >= 2)
    {
        horizontal(x, 'o', '-', 'o');
    }
}

