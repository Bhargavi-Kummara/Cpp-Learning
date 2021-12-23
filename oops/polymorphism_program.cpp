#include <iostream>
using std::string;

class AbstractEmployee {
    //method
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:  // access modifier
    string company;
    int age;
protected:
    string name;
    
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

    //virtual is a in-built function. When a virtual function is invoked
    //it says - To check if there is implementation of 'Work' function in my derived classes
    // If yes - then execute that function in derived classes instead of this in base class

    virtual void Work() {
        std::cout<< name <<" is checking email, task backlog, performing tasks..." << std::endl;
    }

};

class Developer:public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string Name, string Company, int Age, string favProgLanguage)
        :Employee(Name, Company, Age)
    {
        FavProgrammingLanguage = favProgLanguage;
    }
    void FixBug() {
        std::cout<<name<<" fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    void Work() {
        std::cout<< name <<" is writing "<< FavProgrammingLanguage << " code." << std::endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson() {
        std::cout<< name << " is preparing for " << Subject << " lesson." << std::endl;
    }

    //Constructor
    Teacher(string Name, string Company, int Age, string subject)
        :Employee(Name, Company, Age)
    {
            Subject = subject;
    }
    void Work() {
        std::cout<< name <<" is teaching " << Subject  << std::endl;
    }
};

int main()
{
    //The most common use of polymorphism is when a parent class reference
    //is used to refer to a child class object
    Developer d = Developer("Bhargavi", "Capgemini", 20, "C");
    Teacher t = Teacher("Jack", "Cool School", 36, "Mathematics");
    // d.Work();
    // t.Work();

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
}