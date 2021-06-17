#include <iostream>
#include <iomanip>
#include <cmath>
#include "Jungle.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"
#include "Pet.h"
using namespace std;
int main() {

    cout << "Enter the number of animals :";
    int animalNumbers;
    cin >> animalNumbers;

    Jungle jungle(animalNumbers);

    for (int i = 0; i < ceil(animalNumbers/2); ++i)
        jungle.addAnimal(new WildAnimal);

    for (int i = 0; i < floor(animalNumbers/2); ++i)
        jungle.addAnimal(new DomesticAnimal);


    for (int i = 0; i < 1000; ++i)
        jungle.movement();

    cout << "number of total falls: ";
    cout << jungle.getTotalFall() << endl;
    cout << endl;

    cout << "Enter the number of animals :";
    cin >> animalNumbers;

    Jungle jungle1(animalNumbers);

    for (int i = 0; i < ceil(animalNumbers/3) ; ++i)
        jungle1.addAnimal(new WildAnimal);

    for (int i = 0; i < floor(animalNumbers/3) ; ++i)
        jungle1.addAnimal(new Pet);

    for (int i = 0; i < round(animalNumbers/3) ; ++i)
        jungle1.addAnimal(new DomesticAnimal);

    for (int i = 0; i < 1000; ++i)
        jungle1.movement();

    cout << "number of total falls: ";
    cout << jungle1.getTotalFall();



    return 0;
}
