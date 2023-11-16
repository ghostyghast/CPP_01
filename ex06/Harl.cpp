/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:42:11 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 03:39:12 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
using std::string;
using std::cout;

void    Harl::debug(void)
{
    cout << "[ DEBUG ]\n"
         << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";

}

void    Harl::info(void)
{
    cout << "[ INFO ]\n" 
         << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";

}

void    Harl::warning(void)
{
    cout << "[ WARNING ]\n"
         << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month.\n";
}

void    Harl::error(void)
{
    cout << "[ ERROR ]\n"
         << "This is unacceptable! I want to speak to the manager now.\n";   
}

void    Harl::complain(string level)
{
    void    (Harl::* func[4]) (void) = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
    string  levels = "INFO,DEBUG,WARNING,ERROR";
    
    switch (levels.find(level))
    {
    case 0
        
        break;
    
    default:
        break;
    }
            
}