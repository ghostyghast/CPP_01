/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:42:11 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 19:32:46 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
using std::string;
using std::cout;

void    Harl::debug(void)
{
    cout << "[ DEBUG ]\n"
         << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";

}

void    Harl::info(void)
{
    cout << "[ INFO ]\n" 
         << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";

}

void    Harl::warning(void)
{
    cout << "[ WARNING ]\n"
         << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month.\n\n";
}

void    Harl::error(void)
{
    cout << "[ ERROR ]\n"
         << "This is unacceptable! I want to speak to the manager now.\n\n";   
}

void    Harl::complain(string level)
{
    void    (Harl::* func[4]) (void) = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
    string  levels[4] = {"INFO", "DEBUG", "WARNING", "ERROR"};
    int     index = 4;
    
    for (int i = 0; i < 4; i++)
        if (levels[i] == level)
            index = i;
        
    switch (index)
    {
    case 0:
        (this->*(func[index++]))();
    case 1:
        (this->*(func[index++]))();
    case 2:
        (this->*(func[index++]))();
    case 3:
        (this->*(func[index]))();
        break;
    default:
        cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
            
}