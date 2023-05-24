/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:23 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/15 17:41:09 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>

std::string const &Zombie::get(void)
{
    return (this->__name);
}

void Zombie::announce(void)
{
    std::cout << this->__name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name): __name(name)
{
    std::cout << this->__name << " was born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->__name << " exploded" << std::endl;
}

Zombie::Zombie(const Zombie &a)
{
    this->__name = a.__name;
    std::cout << this->__name << " copied" << std::endl;
}

Zombie &Zombie::operator=(const Zombie &a)
    {
        if (this != &a)
        {
            this->__name = a.__name;
        }
        std::cout << this->__name << " test =" << std::endl;
        return *this;
    }