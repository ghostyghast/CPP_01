/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:17:41 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/15 19:07:45 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
	private :
		std::string	_name;
		Weapon		&_weapon;
	
	public :
				HumanA(std::string name, Weapon &weapon);
				~HumanA();
		
		void	setWeapon(Weapon &weapon);
		void	attack(void);
		
	
};