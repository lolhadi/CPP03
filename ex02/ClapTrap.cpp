/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:32:53 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/09 13:39:29 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Declaration of OCF
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << GREEN << "ClapTrap Default Constructor Called" << RESET <<std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << GREEN << "ClapTrap " << this->_name << " Constructor Called " << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout<< GREEN << "Claptrap Copy Consturctor is Called" << RESET << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	std::cout << GREEN << "ClapTrap Copy assignment Operator called" << RESET << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << RED << "ClapTrap Destructor is Called" << RESET << std::endl;
}

// Member Function
void ClapTrap::attack(const std::string& target){
	if (this->_hitPoints == 0){
		std::cout << BLUE << this->_name << " is Dead and Cannot attack" << RESET << std::endl;
		return;
	}
	if (this->_energyPoints == 0){
		std::cout << BLUE << this->_name << " Cannot attack cause got no energy" << RESET << std::endl;
		return;
	}
	else
		{
			std::cout << BLUE << this->_name << " attacks " << target << " causing " << _attackDamage << " points of damage ! "<< RESET << std::endl;
			this->_energyPoints -= 1 ;
		}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << BLUE << this->_name << " is already Dead " << RESET << std::endl;
		return;
	}
	else{
		if (amount >= this->_hitPoints){
			this->_hitPoints = 0;
			std::cout << BLUE << this->_name << " has Died " << RESET << std::endl;
			return;
		}
	}
	this->_hitPoints -= amount;
	std::cout<< BLUE << this->_name << " took " << amount << " damage taken " << this->_hitPoints << " HP left" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints == 0){
		std::cout << BLUE << this->_name << " is dead, cannot be repaired" << RESET << std::endl;
		return;
	}
	if (this->_energyPoints == 0){
		std::cout << BLUE << " NO Energy left" << RESET << std::endl;
		return;
	}
	else{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << BLUE << "ClapTrap " << this->_name << " repaired itself, now has " << this->_hitPoints << " HP and " << this->_energyPoints << " energy left" << RESET << std::endl;
	}
}
