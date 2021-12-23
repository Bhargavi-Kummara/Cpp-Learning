#include <iostream>
using std::string;

class Employee{
public:  // access modifier that can be private, public or protected
    string name;
    string company;
    int age;

    //Behavioral instance
    void IntroduceYourself(){
        std::cout << "Name = " << name << std::endl;  
        std::cout << "Company = " << company << std::endl;
        std::cout << "Age = " << age << std::endl;
    }

    //Creating a constructor
    // Rules for creating a constructor:
    // 1. Constructor doesn't has  a return type
    // 2. Name of constructor is same as class it belongs to
    // 3. Constructor must be public
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;
    }

};

int main()
{
    // Employee employee3;
    // employee2.name = "Greg";
    // employee2.company = "Microsoft";
    // employee2.age = 32;
    // employee2.IntroduceYourself();
    
    Employee employee1 = Employee{"Bhargavi", "Capgemini", 20};
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Bheema", "IBM", 18);
    employee2.IntroduceYourself();

}
