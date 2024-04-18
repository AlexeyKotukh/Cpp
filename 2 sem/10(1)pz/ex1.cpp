#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string occupation; 
    double height;    

    Person(string n, int a, string occ, double h) : name(n), age(a), occupation(occ), height(h) {}

    void print() {
        cout << name << " is " << age << " years old, works as a(n) " << occupation << ", and is " << height << " meters tall." << endl;
    }
};

int main() {
    Person person("Harry", 23, "Software Engineer", 1.75);
    cout << "Meet " << person.name << endl;
    person.print();

    return 0;
}
