/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:09:18 by code              #+#    #+#             */
/*   Updated: 2024/02/15 18:34:39 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
		bool _guard_gate;
		// inherits from ClapTrap
    public:
	// CANONICAL CLASS FORM

	
		ScavTrap();
		ScavTrap(std::string value);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		// could also be |  ~ScavTrap(); override  | but also like this 
		virtual	~ScavTrap();
	
	// // ATTACK / DAMAGE / REPAIR
	// inherits from ClapTrap
	// Gatekeeper mode message
		void guardGate();
		void attack(const std::string& target);



};

#endif
