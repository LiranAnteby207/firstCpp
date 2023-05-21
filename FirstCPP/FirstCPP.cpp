using namespace std;
#include <vector>
#include <string>
#include <iostream>
class Person {
protected:
    std::string name;
public:
    Person(std::string name) : name(name) {}
    virtual void orderFlowers(Florist* florist, Person* person, std::vector< std::string >) = 0;
    virtual void acceptFlowers(FlowersBouquet* flowersBouquet) = 0;
};
class Florist : public Person {
public:
    WholeSaler* wholeSaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;
    Florist(std::string name, WholeSaler* wholeSaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) :
        Person(name),
        wholeSaler(wholeSaler),
        flowerArranger(flowerArranger),
        deliveryPerson(deliveryPerson){}
    void acceptOrder(Person* person, std::vector<std::string>) {}
};
class WholeSaler : public Person {
public:
    WholeSaler(std :: string name, Grower* grower) :
        Person(name),
        grower(grower)
    {}
    Grower* grower;
    void acceptOrder(Person* person, std::vector<std::string>) {}
};
class Grower : public Person {
public:
    Gardner* gardner;
    Grower(std::string name, Gardner* gardner) :
        Person(name),
        gardner(gardner)
    {}
    FlowersBouquet* prepareOrder(std::vector<std::string>) {}
};
class Gardner : public Person {
public:
    Gardner(std::string name) : Person(name) {}
    FlowersBouquet* prepareOrder(std::vector<std::string>) {}
};
class FlowerArranger : public Person {
public:
    FlowerArranger(std::string name) : Person(name) {}
    void arrangeFlowers(FlowersBouquet* flowerBouquet) {}
};
class DeliveryPerson : public Person {
public:
    DeliveryPerson(std::string name) : Person(name) {}
    void deliver(Person* person, FlowersBouquet* flowerBouquet) {}
};
class FlowersBouquet {
public:
    std::vector<std::string> bouquet;
    bool isArranged;
    void arrange() {}
};
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
