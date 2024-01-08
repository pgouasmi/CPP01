/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:08:01 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/03 15:08:01 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

class Sed
{
private:
	std::string Infile;
	std::string Outfile;
	std::string ToModify;
	std::string Modified;
	std::string	Line;
	std::string ModifiedLine;
	std::ifstream In;
	std::ofstream Out;
public:
	Sed(char **argv);
	~Sed();
	void		Struct_init();
	int			CheckInOut();
	std::string	GetInfile();
	std::string	GetOutfile();
	int			Read();
	void		SearchAndReplace();
	void		CloseFd();
};


#endif
