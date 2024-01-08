/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:37:12 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/08 16:36:30 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Sed.hpp"

void	Sed::CloseFd()
{
	In.close();
	Out.close();
}

void	Sed::SearchAndReplace()
{
	size_t index = 0;
	std::size_t	found = Line.find(ToModify, index);
	if (found == std::string::npos)
	{
		Out << Line << std::flush;
		return ;
	}
	while (found != std::string::npos)
	{
		// if (Line.empty())
		// 	return ;
		if (found != index)
			Out << Line.substr(index, found - index);
		Out << Modified;
		index = found + ToModify.length();
		found = Line.find(ToModify, index);
	}
	if (index != Line.length())
		Out << Line.substr(index, Line.length() - index);
}

int	Sed::Read()
{
	std::getline(In, Line);
	if (In.eof())
		return (0);
	return (1);

}

std::string Sed::GetInfile()
{
	return (Infile);
}

std::string Sed::GetOutfile()
{
	return (Outfile);
}

int	Sed::CheckInOut()
{
	if (!In.is_open())
	{
		std::cout << "Could not open `" << Infile << "\'" << std::endl;
		return (1);
	}
	if (!Out.is_open())
	{
		std::cout << "Could not open or create `" << Outfile << "\'" << std::endl;
		return (1);
	}
	return (0);
}

Sed::Sed(char **argv)
{
	Infile = argv[1];
	Outfile = Infile + ".replace";
	ToModify = argv[2];
	Modified = argv[3];
	In.open(Infile.c_str());
	if (In.is_open())
		Out.open(Outfile.c_str(), std::ios::trunc);
}

Sed::~Sed()
{
}
