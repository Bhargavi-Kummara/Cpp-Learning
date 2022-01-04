#include <iostream>
#include <cstdlib>

using namespace std;

class Flower {
public:
    Flower();                    //default Constructor
    void setName(string name);   //setter
    string getName();            //getter
    int setPetals(int petals);
    int getPetals(); 
    float setPrice();
    float getPrice();
    
private:
    string flowerName;
    int numOfPetals;
    float price;
};

Flower::Flower() {
    flowerName = "Tulip";
    numOfPetals = 4;
    price = 8;
}

void Flower::setName(string name) {
    flowerName = name;
}

string Flower::getName() {
    return flowerName;
}

int Flower::setPetals(int n) {
    return numOfPetals = n;
}

int Flower::getPetals() {
    return numOfPetals;
}

float Flower::setPrice() {
    return price = numOfPetals*2;
}

float Flower::getPrice() {
    return price;
}

int main()
{
    Flower flr;
    flr.setName("Jasmine");
    cout << "\nFlower: " << flr.getName() << endl;
    flr.setPetals(10);
    cout << "Number of Petals: " << flr.getPetals() << endl;
    flr.setPrice();
    cout << "Cost of flower: " << flr.getPrice() << endl;
    cout <<"\n";
    return 0;
}