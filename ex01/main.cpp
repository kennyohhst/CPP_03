/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:08:35 by code              #+#    #+#             */
/*   Updated: 2024/02/15 18:59:19 by code             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// ClapTrap bob("bob");
	// bob.takeDamage(8);
	// bob.beRepaired(9);
	// bob.attack("jemoer");
	// bob.takeDamage(10000);

	ScavTrap Steve("Steven");
	Steve.takeDamage(10);
	Steve.beRepaired(9);
	Steve.attack("jemoer");
	Steve.guardGate();
	Steve.guardGate();

	
	return (0);
}
