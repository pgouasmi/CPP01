/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:43:19 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/09 12:11:18 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main()
{
	Harl Object;

	Object.complain("DEBUG");
	Object.complain("INFO");
	Object.complain("WARNING");
	Object.complain("ERROR");
	Object.complain("TEST");
	return (0);
}
