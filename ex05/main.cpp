/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:37:13 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/17 03:10:28 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    harl;

    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
}