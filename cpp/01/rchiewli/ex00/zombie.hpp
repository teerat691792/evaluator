/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:26 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/15 17:25:56 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
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
        void announce( void );
        std::string const &get(void);
        ~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif