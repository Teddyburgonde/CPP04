# CPP04

**EX00**

virtual ~Animal();
Mettre le destructeur en virtual permet que quand on vas delete l'objet Animal, le destructeur de la class dérivée sera appelé aussi.


virtual void makeSound() const = 0;
Class abstraite.
Une classe abstraite ne peut pas être instanciée directement ; elle sert uniquement de classe de base pour d'autres classes dérivées qui doivent implémenter cette méthode.

