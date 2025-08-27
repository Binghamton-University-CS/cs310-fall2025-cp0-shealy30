#include <iostream>
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animal) : animal(animal), numAnimals(1) {}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}

void AnimalsInZoo::display(){
  cout << "Number of animals: " << numAnimals << endl;
  if (numAnimals > 0){
    animal.display();
  }
}
