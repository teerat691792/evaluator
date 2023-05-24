/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <rchiewli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:02 by rchiewli          #+#    #+#             */
/*   Updated: 2023/05/17 13:15:43 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <iterator>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>

void letDoIt(const std::string& filename, const std::string& s1, const std::string& s2)
{   
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cout << "file hua kuy!! " << std::endl;
        return;
    }

    std::stringstream buffer;
    buffer << infile.rdbuf();
    
    std::string strb = buffer.str();

    size_t start_pos = 0;
    while((start_pos = strb.find(s1, start_pos)) != std::string::npos)
    {
        strb.erase(start_pos, s1.length());
        strb.insert(start_pos, s2);
        start_pos += s2.length();
    }
    
    std::string repfilename = filename + ".replace";
    
    std::ofstream outfile(repfilename.c_str());
     if (!outfile.is_open())
    {
        std::cout << "outfile gor hua kuy!! " << std::endl;
        return;
    }
    outfile << strb;
}

int main(int ac, char **av)
{
    if (ac == 4 && *av[2] != 0)
    {
        letDoIt(av[1], av[2], av[3]);
    }
    else
        std::cout << "KUY!!" << std::endl;

    return 0;
}