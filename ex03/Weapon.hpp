/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:26:58 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/15 19:36:10 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
	private :
		std::string _type;

	public :
							Weapon(std::string type);
							~Weapon(void);
		const std::string	&getType(void);
		void				setType(std::string new_type);
		
};

#endif