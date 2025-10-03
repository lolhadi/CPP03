/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 22:22:35 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/03 22:31:04 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a;
	ClapTrap b("Alpha");
	ClapTrap c("Bravo");

	b.attack("Bravo");
	c.takeDamage(5);

	c.attack("Alpha");
	b.takeDamage(8);

	c.beRepaired(3);

	b.attack("Bravo");
	c.takeDamage(20);

	c.beRepaired(5); // should fail cause dead ady
}
