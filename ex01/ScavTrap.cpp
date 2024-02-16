/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:43:45 by code              #+#    #+#             */
/*   Updated: 2024/02/15 19:18:43 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "Scavvy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string value) : ClapTrap(value)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "Scavvy constructor called with a name" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "Scavvy Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
	{	
		std::cout << "Scavvy Copy assignment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
    return (*this);
}

ScavTrap::~ScavTrap()
{
	// std::cout << this->_name << " ded" << std::endl;
	std::cout << "Scavvy destructor called" << std::endl;
}
// ============================================================================

// Gatekeeper Mode Message ====================================================
void	ScavTrap::guardGate()
{
	if (!this->_guard_gate)
	{
		this->_guard_gate = true;
		std::cout << "ScavTrap is now in gatekeepers Mode" << std::endl;
	}
	else
		std::cout << "ScavTrap is already in gatekeepers Mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	int i;

	i = 0;
	if (this->_hit <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead, so cannot attack" << std::endl;
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
		std::cout << "ScavTrap " << this->_name << " has no energy to attack" << std::endl;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << i << " points of damage" << std::endl;
}