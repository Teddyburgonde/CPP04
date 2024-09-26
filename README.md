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

- La fonction clone et strictement en virtual dans AMateria.hpp donc tu ne dois pas definir les fonctions.
dans AMateria.cpp. Virtual veut dire qu''il seront défini dans les classes dérivées.


#Roadmap

1. Cree la class AMateria
2. Cree la fonction use 
3. Cree la fonction getType()
4. Crée la class Ice ✅
5. Crée la class Cure ✅


Notes : 

	






✅
❌
