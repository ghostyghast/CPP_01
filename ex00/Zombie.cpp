/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:36:02 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 17:43:17 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::cout;
using std::string;


Zombie::Zombie(string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	cout << this->_name << '\n';
}

void	Zombie::announce(void)
{
	cout << this->_name << ':'
		 << " BraiiiiiiinnnzzzZ..." << '\n';
}