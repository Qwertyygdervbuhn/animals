#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    string color;
    double weight;
    string environment;

    void Input() {
        cout << "Enter name, color, weight, and environment: ";
        cin >> name >> color >> weight >> environment;
    }

    void Print() {
        cout << "Name: " << name << ", Color: " << color
            << ", Weight: " << weight << " kg, Environment: " << environment << endl;
    }

    void Eat() {
        cout << name << " is eating." << endl;
    }

    void Sound() {
        cout << name << " makes a generic sound." << endl;
    }
};

class Parrot : public Animal {
public:
    void Sound() {
        cout << name << " says: 'Hello!'" << endl;
    }
};

class Elephant : public Animal {
public:
    void Sound() {
        cout << name << " trumpets loudly!" << endl;
    }
};

class Dog : public Animal {
public:
    void Sound() {
        cout << name << " barks: 'Woof!'" << endl;
    }
};

class Cat : public Animal {
public:
    void Sound() {
        cout << name << " meows: 'Meow!'" << endl;
    }
};

int main() {
    Parrot parrot;
    Elephant elephant;
    Dog dog;
    Cat cat;

    cout << "Parrot:\n";
    parrot.Input();
    cout << "Elephant:\n";
    elephant.Input();
    cout << "Dog:\n";
    dog.Input();
    cout << "Cat:\n";
    cat.Input();

    cout << "\nAnimal Details and Sounds:\n";
    parrot.Print();
    parrot.Eat();
    parrot.Sound();

    elephant.Print();
    elephant.Eat();
    elephant.Sound();

    dog.Print();
    dog.Eat();
    dog.Sound();

    cat.Print();
    cat.Eat();
    cat.Sound();

}
