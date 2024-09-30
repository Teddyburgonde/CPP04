/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:07:18 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/30 14:41:26 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define MAX_MATERIA 4

class Character : public ICharacter 
{
	//! forme canonique
	public:
		Character();
		//Character(std::string const &name);
		Character(const Character &src);
		Character &operator=(const Character &rhs);
		~Character();
	public:
		void	equip(AMateria *materia);
		void	unequip(int idx) = 0;
		void	use(int idx, ICharacter& target) = 0;

	private:
		std::string _name; // Nom du personnage
		AMateria* _inventory[4];
};

#endif