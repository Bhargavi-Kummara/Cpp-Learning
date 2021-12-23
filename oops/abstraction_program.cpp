#include <iostream>
using std::string;

class AbstractEmployee {
    //method
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
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

    void AskForPromotion() {
        if(age>30)
            std::cout<< name << " got promoted!" << std::endl;
        else
            std::cout<< name << ", sorry No promotion for you!" << std::endl;
    }

};

int main()
{
    Employee employee1 = Employee{"Bhargavi", "Capgemini", 20};
    Employee employee2 = Employee("Bheema", "IBM", 38);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
