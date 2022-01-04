#include <iostream>
using namespace std;

class Counter{
public:
    Counter();
    int getCount();
    void increaseByCount(int x);
private:
    int count;
};

Counter::Counter()     //Constructor
{ count = 0; }
int Counter::getCount()     //getter function, provides access to private members of the class
{ return count; }
void Counter::increaseByCount(int x)
{ count += x; }

int main(){
    Counter ctr;
    cout << ctr.getCount() << endl;
    ctr.increaseByCount(5);
    cout << ctr.getCount() << endl;
    ctr.increaseByCount(13);
    cout << ctr.getCount() << endl;
}
