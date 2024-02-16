/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:09:18 by code              #+#    #+#             */
/*   Updated: 2024/02/07 13:32:34 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
		std::string		_name;
		unsigned int	_hit = 10;
		unsigned int	_energy = 10;
		unsigned int	_attack = 0;
    public:
	// CANONICAL CLASS FORM
		ClapTrap();
		ClapTrap(std::string value);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
	
	// // ATTACK / DAMAGE / REPAIR
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


};

#endif
