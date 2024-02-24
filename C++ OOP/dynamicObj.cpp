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

    // Object creation - static allocation
    Person person;

    // Object creation -  Dynamic allocation
    Person *p1 = new Person;
    // Person *p1 = new Person();

     // Size of object 
    cout << "Size of Person object : " << sizeof(p1) << endl;

    cout << "Size of Person object : " << sizeof(*p1) << endl;

    // Setting the values of dynamic object
    p1->setName("Chaitanya");
    p1->setAge(23);
    p1->setGender('M');

    // Getting the values of dynamic object
    cout << "Name of Person is : " << (*p1).getName() << endl;
    cout << "Age of Person is : " << (*p1).getAge() << endl;
    cout << "Gender of Person is : " << (*p1).getGender() << endl;

    cout << endl;

    // Getting the values of dynamic object
    cout << "Name of Person is -> " << p1->getName() << endl;
    cout << "Age of Person is -> " << p1->getAge() << endl;
    cout << "Gender of Person is -> " << p1->getGender() << endl;

}