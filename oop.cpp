#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string name) : name(name) {}

    virtual void makeSound() { // Virtual function for polymorphism
        cout << "Some generic animal sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}

    void makeSound() override { // Overriding base class method
        cout << name << " barks: Woof! Woof!" << endl;
    }
};

int main() {
    Animal* myAnimal = new Animal("Generic Animal");
    myAnimal->makeSound();

    Animal* myDog = new Dog("Buddy"); // Using base class pointer for polymorphism
    myDog->makeSound(); 

    delete myAnimal;
    delete myDog;

    return 0;
}
