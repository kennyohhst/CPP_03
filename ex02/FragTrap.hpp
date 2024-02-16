/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:09:18 by code              #+#    #+#             */
/*   Updated: 2024/02/15 19:34:36 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
		bool _guard_gate;
		// inherits from ClapTrap
    public:
	// CANONICAL CLASS FORM

	
		FragTrap();
		FragTrap(std::string value);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		// could also be |  ~FragTrap(); override  | but also like this 
		virtual	~FragTrap();
	
	// // ATTACK / DAMAGE / REPAIR
	// inherits from ClapTrap
	// Gatekeeper mode message
		// void guardGate();
		void highFivesGuys(void);
		void attack(const std::string& target);



};

#endif
