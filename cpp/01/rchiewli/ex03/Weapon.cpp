/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:23 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/16 12:00:13 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

Weapon::Weapon()
{
    // std::cout << this->__type << " exploded" << std::endl;
}

std::string const &Weapon::getType(void)
{
    return (this->__type);
}

Weapon::Weapon(std::string type): __type(type)
{
    std::cout << this->__type << " was born" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << this->__type << " exploded" << std::endl;
}

// Weapon::Weapon(const Weapon &a)
// {
//     this->__type = a.__type;
//     std::cout << this->__type << " copied" << std::endl;
// }

// Weapon &Weapon::operator=(const Weapon &a)
// {
//     if (this != &a)
//     {
//         this->__type = a.__type;
//     }
//     std::cout << this->__type << " test =" << std::endl;
//     return *this;
// }

void Weapon::setType(std::string name)
{
    this->__type = name;
}