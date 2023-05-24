/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:26 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/16 01:50:24 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iterator>
#include <string>
#include <cctype>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string __name;
        Weapon      &__weapon;
        
    public:
        HumanA();
        // HumanA(std::string name);
        HumanA(std::string name, Weapon &weapon);
        // HumanA(const HumanA &a);
        HumanA &operator=(const HumanA &a);
        ~HumanA();
        std::string const &getName(void);
        void setName(std::string name);
        void attack();
};

#endif