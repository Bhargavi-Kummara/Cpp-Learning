#include <iostream>
#include <cstdlib>

using namespace std;

struct companyDetails {
    string companyName;
    string resignation;
    int monthlySalary;
    unsigned int workExpInYears;
};

struct personInfo {
    string name;
    unsigned int age;
    companyDetails company;
};

void printCompanyDetails(const companyDetails company) {
    cout << "Company name: " << company.companyName << endl;
    cout << "Job resignation: " << company.resignation << endl;
    cout << "Monthly salary: " << company.monthlySalary << " dollars" << endl;
    cout << "Work experience in years: " << company.workExpInYears <<  endl;
    cout << "\n";
}

void printPersonInfo(const personInfo person) {
    companyDetails workingCompany = person.company;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    printCompanyDetails(workingCompany);
}

int main()
{
    personInfo person1;
    personInfo person2;
    personInfo person3;

    companyDetails company1;
    companyDetails company2;
    companyDetails company3;

    company1.companyName = "Google Inc.";
    company1.resignation = "Software Engineer";
    company1.monthlySalary = 8000;
    company1.workExpInYears = 2;

    company2.companyName= "Robert Bosch";
    company2.resignation = "Hardware Engineer";
    company2.monthlySalary = 9800;
    company2.workExpInYears = 3;

    company3.companyName = "Infosys";
    company3.resignation = "System Engineer";
    company3.monthlySalary = 3000;
    company3.workExpInYears = 1;

    // printCompanyDetails(company1);
    // printCompanyDetails(company2);
    // printCompanyDetails(company3);

    person1.name = "Greg";
    person1.age = 28;
    person1.company = company1;

    person2.name = "Rahul";
    person2.age = 32;
    person2.company = company3;

    person3.name = "Priya";
    person3.age = 26;
    person3.company = company2;

    printPersonInfo(person1);
    printPersonInfo(person2);
    printPersonInfo(person3);

    return EXIT_SUCCESS;
}
