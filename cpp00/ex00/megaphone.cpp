/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmith <jsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:33:17 by jsmith            #+#    #+#             */
/*   Updated: 2022/06/03 16:53:05 by jsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

	int i;
	int u;

	i = 1;
	(void)argc;
	while(argv[i])
	{	
		u = 0;
		while (argv[i][u])
		{
			std::cout << (char)toupper(argv[i][u]);
			u++;
		}
		//std::cout << std::endl; ???
		i++;	
	}
    return 0;
}

