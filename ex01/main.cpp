/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 23:36:41 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/08 15:52:19 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (){
	// ScavTrap a("mai");
	// ScavTrap b("ChungLul");

	// ScavTrap c("alolo");
	// ScavTrap d(a);

	// a.beRepaired(30);
	// c = a;
	// c.beRepaired(1);
	// b.takeDamage(10);
	// b.guardGate();
	// a.attack("alolo");

	std::cout << "\n--- Creating ScavTraps ---" << std::endl;
	ScavTrap a("Mai");
	ScavTrap b("ChungLul");
	ScavTrap c("Alolo");

	std::cout << "\n--- Copy Construction ---" << std::endl;
	ScavTrap d(a); // Copy constructor

	std::cout << "\n--- Copy Assignment ---" << std::endl;
	c = a; // Copy assignment

	std::cout << "\n--- Actions ---" << std::endl;
	a.beRepaired(30);
	c.beRepaired(1);
	b.takeDamage(10);
	b.guardGate();
	a.attack("Alolo");

	std::cout << "\n--- Destruction Phase ---" << std::endl;
	// Destructors will automatically be called when objects go out of scope
	return 0;
}

