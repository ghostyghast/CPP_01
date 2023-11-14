/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:28:00 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 18:36:11 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private :
		std::string _name;
		static int	_hordeNumber;
		int			_zombieIndex;

	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		
		void	set_name(std::string name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
