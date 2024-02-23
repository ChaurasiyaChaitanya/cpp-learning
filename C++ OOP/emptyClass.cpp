#include <iostream>
using namespace std;

class Person {

    // Empty Class

};


int main() {

    // Object creation
    Person person;

    // Size of Person object with Empty class --> 1 Byte (for its identification or tracking)
    cout << "Size of Person object with Empty class : " << sizeof(person) << endl;

}