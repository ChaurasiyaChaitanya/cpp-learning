#include <iostream>
using namespace std;

class Person {

    // properties
    public:
    string name;
    int age;
    char gender;

    void getPersonInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
    }

};


int main() {

    // Object creation
    Person person;

     // Size of Person object 
    cout << "Size of Person object : " << sizeof(person) << endl;

    // set the values of data members of object
    person.name = "Chaitanya";
    person.age = 23;
    person. gender = 'M';

    // Accessing the properties of Person Object
    // By default all the data members are private
    // To access them make them public -- public:

    // if values are not set by default it stores garbage value
    cout << "Person Info : " << person.name  << " " << person.age << " " << person.gender << endl;

    person.getPersonInfo();

}