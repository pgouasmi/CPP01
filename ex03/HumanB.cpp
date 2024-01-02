/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:00:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/02 16:00:03 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->HeldWeapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon NewWeapon)
{
	HeldWeapon = NewWeapon;
}

HumanB::HumanB(std::string Name)
{
	name = Name;
}

HumanB::~HumanB()
{
	std::cout << name << " deleted." << std::endl;
}

