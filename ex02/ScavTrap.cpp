/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 23:14:21 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/09 13:39:59 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << GREEN << "ScavTrap Default Constructor Called" << RESET <<std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << RED << "ScavTrap Destructor is Called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << GREEN << "ScavTrap " << this->_name << " Constructor Called " << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << GREEN << "ScavTrap Copy constructor called" << RESET << std::endl;
	*this=other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this == &other)
		return (*this);
	std::cout << GREEN << "ScavTrap Copy assignment Operator called" << RESET << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void ScavTrap::guardGate(){
	std::cout << BLUE << "ScavTrap " << this->_name <<" is now in Gatekeeper mode" << RESET << std::endl;
}
// This Overides the Based Class Function
void ScavTrap::attack(const std::string& target){
	if (this->_hitPoints == 0){
		std::cout << BLUE << this->_name << " is Not Alive Anymore" << RESET << std::endl;
		return;
	}
	if (this->_energyPoints == 0){
		std::cout << BLUE << this->_name << "tired, no energy" << RESET << std::endl;
		return;
	}
	else
		{
			std::cout << BLUE << "ScavTrap " << this->_name << " attacks " << target << " causing " << _attackDamage << " points of damage ! "<< RESET << std::endl;
			this->_energyPoints -= 1 ;
		}
}
