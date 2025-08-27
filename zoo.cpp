#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Sabertooth Tiger", 1819);
   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   AnimalsInZoo zoo(animal3);
   zoo.display();
   
   delete animal1;
}
