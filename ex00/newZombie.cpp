/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:31:43 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 17:40:43 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::string;

Zombie	*newZombie(string name)
{
	Zombie *zomb = new Zombie(name);
	return(zomb);
}