#include <iostream>
#include <string.h>
using namespace std;

class Person {

    // properties
    private:
    string name;

    public:
    int age;
    char gender;
    char *detail;

    // No args constructor
    Person() {
        cout << "Constructor Invoked" << endl; 
        detail = new char[100];
    }

    // Parameterised constructor
    Person(string name, int age, char gender) {

        // this refres to the current object
        // use this if the names are same
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
    }

    // Copy constructor
    // Without & - pass by value so need to make pass by reference
    // Person(Person& person) {

    //     cout << "Copy constructor invoked" << endl;

    //     this -> name = person.name;
    //     this -> age = person.age;
    //     this -> gender = person.gender;
    // }

    void getPersonInfo() {
        cout << "Name : " << this -> name << endl;
        cout << "Age : " << this -> age << endl;
        cout << "Gender : " << this -> gender << endl;
        cout << "Detail : " << this -> detail << endl;
        cout << endl;
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

    void setDetail(char detail[]) {
        // copy in current pointer detail
        strcpy(this->detail, detail);
    }

};


int main() {

    Person p1("Chaitanya", 23, 'M');

    // Create p2 object with properties of p1
    // Copy constructor invoked - inbuilt auto create
    // Custom copy constructor also can be made
    Person p2(p1);
    p2.getPersonInfo();

    cout << endl;

    // Default copy constructor creates Shallow copy of object
    Person sp;

    sp.setName("Yash");
    sp.setAge(23);
    sp.setGender('M');

    char detail[8] = "student";
    sp.setDetail(detail);

    sp.getPersonInfo();


    // create new object - use default copy constructor
    // comment custome copy constructor

    Person sp1(sp);
    sp1.getPersonInfo();
    // Person sp1 = sp;
    
    // change the detail of sp
    char detail1[7] = "worker";
    sp.setDetail(detail1);

    // Accessing the same memory with two names - sp and sp1 - detail
    // shallow copy referse to the same memory location of detail
    // changes in detail of one object also change the detail of other object
    sp.getPersonInfo();

    sp1.getPersonInfo();

}