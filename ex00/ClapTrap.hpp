/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:48:00 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/03 15:20:29 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define BLUE	"\033[0;34m"
#define WHITE	"\033[0;37m"
#define RESET	"\033[0m"

class ClapTrap{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

	public:
		//Constructor
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator = (const ClapTrap &other);
		~ClapTrap();


		// Member function
		void attack(const std::string& target); // tries to attack a target(cost energy)
		void takeDamage(unsigned int amount); // loses HP when hit
		void beRepaired(unsigned int amount); // Heal itself(loses energy)

};

#endif
