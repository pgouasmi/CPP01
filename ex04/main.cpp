/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:02:24 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/03 15:02:24 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0])
	{
		std::cout << "Wrong input.\nUsage : ./Sed_is_for_losers \"Filename\" \"String1\" \"String2\"" << std ::endl;
		return (1);
	}
	Sed Handler(argv);
	if (Handler.CheckInOut())
		return (1);
	while (Handler.Read())
		Handler.SearchAndReplace();
}
