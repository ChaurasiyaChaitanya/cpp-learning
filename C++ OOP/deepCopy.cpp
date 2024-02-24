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
    // static data memeber
    // belongs to class
    // No need of object to access it 
    static int taskAssigned;

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
    Person(Person& person) {

        // Deep copy
        // create a copy of detail at new memory location
        char *ch = new char[strlen(person.detail) + 1];
        strcpy(ch, person.detail);
        this -> detail = ch;

        cout << "Copy constructor invoked" << endl;

        this -> name = person.name;
        this -> age = person.age;
        this -> gender = person.gender;
    }

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

    // Creation of Destructor
    ~Person() {
        cout << "Destructor invoked" << endl;
    }

    // static function
    // belongs to class
    // No need of object to access it 
    // can only use static data members
    static int printTask() {
        return taskAssigned;
    };
};

// initialization of static data member
// :: - scope resolution operator
int Person::taskAssigned = 6;


int main() {

    // Custom copy constructor creates Deep copy of object
    Person sp;

    sp.setName("Yash");
    sp.setAge(23);
    sp.setGender('M');

    char detail[8] = "student";
    sp.setDetail(detail);

    sp.getPersonInfo();


    // create new object - use custom copy constructor

    Person sp1(sp);
    sp1.getPersonInfo();
    // Person sp1 = sp;
    
    // change the detail of sp
    char detail1[7] = "worker";
    sp.setDetail(detail1);

    // Deep copy referse to the new memory location of detail
    // changes in detail of one object does not change the detail of other object
    sp.getPersonInfo();

    sp1.getPersonInfo();

    // copy assignment operator
    Person p3("Neha", 22, 'G');

    // copy the value of sp in p3 object
    p3 = sp;

    cout << "Copy assignment operator" << endl;
    p3.getPersonInfo();

    // Destructor --> Deallocates the memory automatically for static allocation - same as constructor
    Person dp;

    // For dynamic allocation - manually deallocate the memory
    Person *dp1 = new Person();

    cout << "Destructor for dynamically allocated object" << endl;
    delete dp1;

    // Accessing static data member without object
    cout << "Static data member : " << Person::taskAssigned << endl;

    // Also can be access by creating object - not recommended

    // Calling static function without object - has no this keyword
    cout << "Print Static function : " << Person::printTask() << endl;

}