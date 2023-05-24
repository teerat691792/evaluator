/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:02 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/17 15:30:13 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <ostream>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>

int main()
{
    Harl harl;
    
    harl.complain("warning");
    harl.complain("kuy");
    harl.complain("error");
    harl.complain("hee");
    return 0;
}