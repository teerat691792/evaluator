/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:26 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/16 21:01:43 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <ostream>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>

enum logLevel 
{
    DEBUG = 0,
    INFO,
    WARNING,
    ERROR
};

class Harl
{
    private:
        // std::string __type;
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl();
        // Harl(std::string name);
        // Harl(const Harl &a);
        // Harl &operator=(const Harl &a);
        // std::string const &getType(void);
        // void setType(std::string name);
        void complain(std::string level);
        ~Harl();
};

#endif