#include <iostream>
using namespace std;

class Person {

    // properties
    private:
    string name;

    public:
    int age;
    char gender;

    void getPersonInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
    }

    string getName() {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    int getAge() {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    char getGender() {
        return gender;
    }

    void setGender(char g) {
        gender = g;
    }

};


int main() {

    // Object creation
    Person person;

     // Size of Person object 
     // Why 32 -- Padding and Greedy Alignment Concepts
    cout << "Size of Person object : " << sizeof(person) << endl;

    // Getter Setter is used for accessing and manipulating private properties
    cout << "Name of person is : " << person.getName() << endl;

    // person.name = "Chaitanya";

    person.setName("Chaitanya");

    person.setAge(23);
    person.gender = 'M';

    // if values are not set by default it stores garbage value
    cout << "Person Info : " << person.getName()  << " " << person.getAge() << " " << person.getGender() << endl;

    person.getPersonInfo();

}