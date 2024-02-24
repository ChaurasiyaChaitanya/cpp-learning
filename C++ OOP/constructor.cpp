#include <iostream>
using namespace std;

class Person {

    // properties
    private:
    string name;

    public:
    int age;
    char gender;

    // No args constructor
    Person() {
        cout << "Constructor Invoked" << endl; 
    }

    // Parameterised constructor
    Person(string name, int age, char gender) {

        cout << "Address of this -> " << this << endl;

        // this refres to the current object
        // use this if the names are same
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
    }

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

    // Object creation - static allocation
    // By default -> default constructor invokes
    // person.Person();

    // Parameterised Constructor
    Person person("Chaitanya", 23, 'M');
    person.getPersonInfo();

    // address of person object and this are same
    cout << "Address of person object : " << &person << endl; 

    cout << endl;

    // Object creation -  Dynamic allocation
    Person *p1 = new Person("Yash", 24, 'M');
    // Person *p1 = new Person();
    p1->getPersonInfo();

}