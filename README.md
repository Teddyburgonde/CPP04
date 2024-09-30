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

✅
❌
