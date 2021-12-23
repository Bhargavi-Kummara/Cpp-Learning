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
};

int main()
{
    Developer d = Developer("Bhargavi", "Capgemini", 20, "C");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack", "Cool School", 36, "Mathematics");
    t.PrepareLesson();
    t.AskForPromotion();
}

//Brief about inheritance principle used here
// We created two derived classes - 'Developer' and 'Teacher'. These two classes are
// inheriting from a class called "Employee" and also have some additional features in them.
