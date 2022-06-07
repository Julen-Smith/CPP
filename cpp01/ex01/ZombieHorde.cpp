/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:14:53 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/06 18:38:33 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define ZOMBIE_BUFFER 4096

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie_array[N];	
	int i;
	
	i = 0;
	while(i < N)
	{	
		zombie_array[i] = new Zombie(name);
		zombie_array[i][0].announce();
		i++;
	}
	return (*zombie_array);
}