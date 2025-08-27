#include "Animal.h"

class AnimalsInZoo{
 public:
  AnimalsInZoo(Animal animal);
  AnimalsInZoo();
  void display();

 private:
  Animal animal;
  int numAnimals;
};
