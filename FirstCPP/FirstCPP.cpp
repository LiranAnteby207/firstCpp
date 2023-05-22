using namespace std;
#include <vector>
#include <string>
#include <iostream>
#include "Person.h"
#include "Florist.h"
#include "Gardener.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"


int main()
{
    Person* p1 = new Person("Chris");
    Person* p2 = new Person("Robin");
    Gardener* gar = new Gardener("Garett");
    Grower* g = new Grower("Gray",gar);
    DeliveryPerson* dp = new DeliveryPerson("dylan");
    FlowerArranger* fa = new FlowerArranger("Flora");
    Wholesaler* ws = new Wholesaler("Watson",g);
    Florist* f = new Florist("fred",ws,fa,dp);
    std::vector<std::string> order = { "Roses","Violets","Gladiolus" };
    p1->orderFlowers(f, p2, order);
    delete p1;delete gar; delete g;
    delete f;delete dp;delete fa;
    delete p2;delete ws;
}
