/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 07:11:08 by code              #+#    #+#             */
/*   Updated: 2024/02/15 17:51:59 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CANONICAL CLASS FORM =======================================================
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string value)
{
	std::cout << "Default constructor called with a name" << std::endl;
	_name = value;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
	{	
		std::cout << "Copy assignment operator called" << std::endl;
		this->_name = other._name;
		this->_attack = other._attack;
		this->_energy = other._energy;
		this->_hit = other._hit;
	}
    return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " died" << std::endl;
	std::cout << "destructor called" << std::endl;
}
// ============================================================================


// ATTACK / DAMAGE / REPAIR ===================================================
void ClapTrap::attack(const std::string& target)
{
	int i;

	i = 0;
	if (this->_hit == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, so cannot attack" << std::endl;
		return ;
	}
	if (this->_energy != 0)
	{
		while (this->_energy != 0)
		{
			this->_energy--;
			i++;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << i << " points of damage" << std::endl;
		}
		return ;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int x;

	x = 0;
	if (amount == 0)
		return ;
	for (unsigned int i = 0; i < amount; i++)
	{	
		if (this->_hit == 0)
			break ;
		this->_hit--;
		x++;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << x << " damage" << std::endl;
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int i;

	i = 0;
	if (this->_hit == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't heal, he dead" << std::endl;
		return ;
	}
	if (this->_hit > 0 || this->_energy != 0)
	{
		while (i < amount && (this->_hit == 10 || this->_energy == 0))
		{
			i++;
			this->_hit++;
			this->_energy--;
		}	
		std::cout << "ClapTrap " << this->_name << " has repaired " << i << " amount of points which brings total to " << this->_hit << std::endl;
	}
	else if (this->_hit == 10)
		std::cout << "ClapTrap " << this->_name << " has max health" << std::endl;
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;

}
// ============================================================================
