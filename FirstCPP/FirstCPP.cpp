using namespace std;
#include <vector>
#include <string>
#include <iostream>
#include "Person.h"
#include "Florist.h"

int main()
{
    std::cout << "Hello World!\n";
    Person* p1 = new Person("liran");
    std::cout << p1->getName() + "\n";
    Florist* f = new Florist("fred");
    std::vector<std::string> order = { "a","b","c" };
    p1->orderFlowers(f, p1, order);
    delete p1;
    delete f;
}
