/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:26 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/15 21:33:14 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <cctype>

class Zombie
{
    private:
        std::string __name;
    public:
        Zombie();
        Zombie(std::string name);
        Zombie(const Zombie &a);
        Zombie &operator=(const Zombie &a);
        void setName(std::string name);
        void announce( void );
        std::string const &get(void);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif