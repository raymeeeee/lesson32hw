#include "Zoo.h"

int main()
{
    /*Bird b;
    b.showInfo();
    Fish c;
    c.showInfo();
    Mammal d;
    d.showInfo();*/

    Cage d("01234", 10);
    d.addAnimal(new Bird("Titmouse", 0, 30));
    d.addAnimal(new Fish("Salmon", 0, 1));
    d.addAnimal(new Mammal("Elephant", 0, "Savanna"));

    d.showInfo();
    d.delAnimal(2);
    cout << "==========================================" << endl;

    d.showInfo();
    d.addAnimal(new Mammal("Lion", 1, "Savanna"));
    cout << "==========================================" << endl;

    d.showInfo();
}

