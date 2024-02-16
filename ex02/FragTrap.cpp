/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:43:45 by code              #+#    #+#             */
/*   Updated: 2024/02/15 19:37:23 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FRAGGYYYY constructor called" << std::endl;
}

FragTrap::FragTrap(std::string value) : ClapTrap(value)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FRAGGYYYY constructor called with a name" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FRAGGYYYY Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
	{	
		std::cout << "FRAGGYYYY Copy assignment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
    return (*this);
}

FragTrap::~FragTrap()
{
	// std::cout << this->_name << " ded" << std::endl;
	std::cout << "FRAGGYYYY destructor called" << std::endl;
}
// ============================================================================

// Gatekeeper Mode Message ====================================================
void	FragTrap::highFivesGuys()
{
	std::cout << "Anyone wana highfive me! :D" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	int i;

	i = 0;
	if (this->_hit <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, so cannot attack" << std::endl;
		return ;
	}
	if (this->_energy != 0)
	{
		while (this->_energy != 0)
		{
			this->_energy--;
			i++;
		}
	}
	else
		std::cout << "FragTrap " << this->_name << " has no energy to attack" << std::endl;
	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << i << " points of damage" << std::endl;
}