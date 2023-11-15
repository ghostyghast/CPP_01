/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:17:21 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/15 19:07:47 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
	private :
		std::string	_name;
		Weapon		*_weapon;
	
	public :
				HumanB(std::string name);
				~HumanB();
		
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};