
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:12:46 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/22 19:55:24 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_array(int *tab, int n)        //writes numbers from 0 to n
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_retain(int *tab, int max)
{
	int	i;
    
    // i is the last index of array
	i = max - 1;
	
    //let's take the example of  016789 to 023456 (n = 6)
	//while loop will check if last index is equal to 9, penultimate equal 8 etc..
	//is tab[6] >= 9 - 0? yes > i--
	//is tab[8] >= 9 - 1? yes > i--
	//is tab[7] >= 9 - 2? yes > i--
	//. . .
	// is tab[2] >= 9- (6 - 1(i) + 1 ? no
	//we found the index to increase (tab[2])

	while (tab[i] >= 9 - (max - (i + 1)) && i > 0)
		i--;
	
	
	tab[i]++;
	
	//for now the number is 026789
	
	i++;
	//i = 2
	//we keep track of the increase index tab[2]
 
	while (i < max && i >= 0) //This will reset all the numbers after the increased index
	{
		//the index increased will give his value + 1 to the next ones on his right
		
		tab[i] = tab [i - 1] + 1; // "02379" > "023479" > "023459" > "023456"
		i++;
	}
	
	// next print will be "023456"
}

void	ft_print_combn(int n)
{
	int	tab[9];                         // array of 9 index 
	int	i;

	i = 0;
	while (i < 9)
	{

		tab[i] = i;         	        //fills with numbers from 0 to 9 in tab[]
		i++;
	}

	i = n - 1;                      	// i is the last index of array
	
	if (n < 1 || n > 9)
		return ;
		
	while (tab[i] < 10)	                //until the last index is lower than 10	
	{
	    
		ft_array(tab, n);               //send actual array to be printed
		
		if (tab[0] != 9 - (n - 1))
		{
			write(1, ", ", 2);
		}
		
		tab[i]++;                       //increase de last index by one
		
		if (tab[i] > 9)                 //when last index has value 9
			ft_retain(tab, n);
	}
}

int main ()
{
	ft_print_combn(6);
	return 0;
}
