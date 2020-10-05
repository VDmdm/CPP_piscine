/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 12:47:15 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 13:45:45 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon & Weapon): name(name), weapon(Weapon) {
}

void HumanA::attack(void) {

	std::cout << this->name << " attacks with his " << this->weapon.getType()
													<< std::endl;

}

HumanA::~HumanA(void) {
}
