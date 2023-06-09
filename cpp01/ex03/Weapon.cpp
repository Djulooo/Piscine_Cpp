/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:41:24 by jlaisne           #+#    #+#             */
/*   Updated: 2023/05/24 13:27:16 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string name) : _type(name){

}

Weapon::~Weapon(){

}

const std::string& Weapon::get_name(){

    return this->_type;
}


void Weapon::setType(const std::string type){

    this->_type = type;
}
