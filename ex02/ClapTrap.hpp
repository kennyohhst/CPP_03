/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:09:18 by code              #+#    #+#             */
/*   Updated: 2024/02/15 19:14:22 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
		std::string		_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_attack;
    public:
	// CANONICAL CLASS FORM
		ClapTrap();
		ClapTrap(std::string value);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		//Must be virtual because of polymorphism
		virtual	~ClapTrap();
	
	// // ATTACK / DAMAGE / REPAIR
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
