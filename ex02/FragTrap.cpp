/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:37:22 by muhabin-          #+#    #+#             */
/*   Updated: 2025/10/08 17:59:21 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << GREEN << "FragTrap Default Constructor Called" << RESET <<std::endl;
	this->_hitPoints =100;
	this->_energyPoints = 100;
	this->_attackDamage = 50;
	std::cout << "HP: " << this->_hitPoints << "\n";
	std::cout << "EP: " << this->_energyPoints << "\n";
	std::cout << "AD: " << this->_attackDamage << std::endl;
}
FragTrap::~FragTrap(){
	std::cout << RED << "FragTrap Destructor is Called" << RESET << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << GREEN << "FragTrap " << this->_name << " Constructor Called " << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 50;
	std::cout << "HP: " << this->_hitPoints << "\n";
	std::cout << "EP: " << this->_energyPoints << "\n";
	std::cout << "AD: " << this->_attackDamage << std::endl;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << GREEN << "FragTrap Copy constructor called" << RESET << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator= (const FragTrap& other){
	if (this == &other)
		return (*this);
	std::cout << GREEN << "FragTrap Copy assignment Operator called" << RESET << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << BLUE << "FragTrap " << this->_name << " is asking for HighFive" << RESET << std::endl;
}
