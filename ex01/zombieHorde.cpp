/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:57:33 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 18:35:32 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::cout;
using std::string;

Zombie	*zombieHorde(int N, string name)
{
	Zombie	*horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}