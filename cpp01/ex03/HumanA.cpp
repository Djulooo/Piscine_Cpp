/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:45:42 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 12:32:17 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : _name(name), _Weapon(Weapon){

}

HumanA::~HumanA(){

}

void    HumanA::attack( void ){

    std::cout << this->_name << " attacks with their " << this->_Weapon.get_name() << std::endl;
}