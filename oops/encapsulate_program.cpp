#include <iostream>
using std::string;

class Employee{
private:  // access modifier
    string name;
    string company;
    int age;
    
public:
    void setName(string Name) { //setter method
        name = Name;
    }
    string getName() { //getter method
        return name;
    }
    void setCompany(string Company) {
        company = Company;
    }
    string getCompany() {
        return company;
    }
    void setAge(int Age) {
        if(Age>18)
        age = Age;
    }
    int getAge() {
        return age;
    }
    //Behavioral instance
    void IntroduceYourself(){
        std::cout << "Name = " << name << std::endl;  
        std::cout << "Company = " << company << std::endl;
        std::cout << "Age = " << age << std::endl;
    }

    //Constructor
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;
    }

};

int main()
{
    Employee employee1 = Employee{"Bhargavi", "Capgemini", 20};
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Bheema", "IBM", 18);
    employee2.IntroduceYourself();

    employee1.setAge(15);
    std::cout<<employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;
}
