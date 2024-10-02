# CPP04

**EX00**

virtual ~Animal();
Mettre le destructeur en virtual permet que quand on vas delete l'objet Animal, le destructeur de la class dérivée sera appelé aussi.


**EX02**
virtual void makeSound() const = 0;
Class abstraite.
Une classe abstraite ne peut pas être instanciée directement ; elle sert uniquement de classe de base pour d'autres classes dérivées qui doivent implémenter cette méthode.

**EX03**

Petit rappel

C'est quoi une Classe abstraite 

```c
- Une classe qui peut contenir des méthodes virtuelles pures et des méthodes avec implémentation.
```

C'est quoi une interface ? 

```c

- Une interface en C++ est une classe abstraite qui 
contient que des méthodes purement virtuelle.
- Les classes dérivées doivent obligatoirement 
fournir une implémentation pour 
toutes les méthodes déclarées dans l'interface.

Pour résumée une interface defini des fonctions sans les implémentations (pas de .cpp qui implémentes la fonction).
Les fonctions seront implementer dans les class enfants dans leurs .cpp.
```

Remarques:

```c
- La fonction clone et strictement en virtual dans AMateria.hpp donc tu ne dois pas definir les fonctions.
dans AMateria.cpp. Virtual veut dire qu''il seront défini dans les classes dérivées.
```

C'est quoi une matéria ?
```c
C'est un tableau qui peut contenir 4 sorts magiques,
par exemple : 
_materia[0] : Materia de feu
_materia[1] : Materia de glace
_materia[2] : Materia de guérison
_materia[3] : Materia de foudre
```

#Roadmap

1. Cree les differents fichiers hpp:
    AMateria.hpp
    Cure.hpp
    Ice.hpp
    ICharacter.hpp
    IMateriaSource.hpp
    MateriaSource.hpp
    Character.hpp

2. Cree les differents fichiers cpp:
    AMateria.cpp
    Cure.cpp
    Ice.cpp
    Character.cpp
    MateriaSource.cpp

```

**MateriaSource.cpp -> createMateria**

La fonction createMateria créer une nouvelle materia
en fonction de son type 
(comme "feu", "glace", etc.).


```c
AMateria* MateriaSource::createMateria(std::string const & type)
{
	//for
	// return clone()
	
	//return (NULL)	
}
```

**Apprendre une nouvelle AMateria :** 

```c
- La fonction prends en entrée un objet AMateria 
et integre cet objet dans le systeme de MateriaSource.
Cela peut impliquer la création d'une copie de l'objet pour garantir
que MateriaSource possède sa propre version de l'AMateria.
```

**Ajouter à l'inventaire**

```c
Une fois que l'AMateria est apprise, elle doit être ajoutée à un emplacement disponible dans le tableau _materia de MateriaSource.
```

**MateriaSource.cpp -> LearMateria**

La fonction learnMateria doit réaliser deux tâches :
	- Apprendre une Nouvelle AMateria
	- Ajouter à l'inventaire 

```c
void MateriaSource::learnMateria(AMateria*)
{
	//for 

}
```
---------------------------------------------------------------

**Explication de code ex03**

**Amateria.hpp**

- class ICharacter pour dire qu'il y a une class ICharacter qui existe pour pas cree de conflit.
- virtual pour le destructeur pour que pour que quand je l'appelle dans les class derivées
c'est leurs constructeur qui sera appelé , pas celui la.
- virtual permet de pouvoir definir les fonctions dans les class dérivées.
- protected signifie que les membres sont accessibles dans la class de base et dans les classes dérivées mais pas depuis l'exterieur.

**Amateria.cpp**

```c
AMateria &AMateria::operator=(const AMateria &rhs)
```
- _type permet de donner un type au materia pour les differenciers.

```c
void    AMateria::use(ICharacter& target)
```
- Use c'est pour dire que la materia (le sort) est utilisé sur ce personnage.

**Character.hpp**

```c
class Character : public ICharacter 
```
C'est pour dire que la class Character herite de la class ICharacter


```c
AMateria* _inventory[4];
```
C'est un tableau de pointeur. 
Le pointeur pointe vers un element du tableau. 


**Character.cpp**

```c
Character::Character(const Character &src)
{
    this->_name = src.getName();
	for (int i = 0; i < MAX_MATERIA; i++)
	{
        if (src._inventory[i] != NULL)
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}
```
Le constructeur par copie permet de creer une copie de l'objet.
this->_name = src.getName();
la on obtient le nom pour le copier dans _name
Je parcours chaque element du tableau _inventory de l'objet source src.
Puis je clone les elements de l'inventaire de src dans l'objet.



```c
void	Character::equip(AMateria *materia)
```
Cette fonction permet de mettre les materia dans l'inventaire.

```c
void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= MAX_MATERIA - 1)
    {
        if (_inventory[idx] != NULL)
            _inventory[idx] = NULL;
    }
}
```
Cette fonction permet de d'enlever une materia.
Le premier if permet de voir si il est bien dans la range.


```c
void	Character::use(int idx, ICharacter& target);
```
Permet d'appliquer un sort sur une cible 

**Cure.cpp**

```c
Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}
```

Ici on appelle le constructeur de la class parents (AMateria) 
pour utiliser le comportement qui a etait defini dans AMateria.

```c
Cure &Cure::operator=(const Cure &rhs)
{
    if (this != &rhs)
    {
        this->AMateria::operator=(rhs);
    }
    return (*this);
}
```
Ici on appelle l'operateur d'assigniation de AMateria pour copier ce qu'il y a dans AMateria
et dans rhs.


```c
AMateria* Cure::clone() const
{
    Cure *newCure = new Cure(*this);
    return (newCure);
}
```
On clone un objet.

**MateriaSource.cpp**

```c

void MateriaSource::learnMateria(AMateria* m)
{
	if (m != NULL)
	{
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] != NULL && _materia[i]->getType() == m->getType())
			{
				std::cout << "This Materia is already learned." << std::endl;
				return ;
            }
        }
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] == NULL)
			{
				this->_materia[i] = m->clone(); // Apprends une nouvelle AMateria et l'ajoute a l'inventaire 
				return ;
			}
		}
		std::cout << "MateriaSource is full" << std::endl;
	}
}
```
Le premier if verifie si la materia est deja prise.
Le deuxieme if Apprends une nouvelle AMateria et l'ajoute a l'inventaire.






✅
❌
