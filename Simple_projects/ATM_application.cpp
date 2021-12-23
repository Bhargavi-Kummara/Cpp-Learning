#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit cash" << endl;
    cout << "3. Withdraw cash" << endl;
    cout << "4. Funds transfer" << endl;
    cout << "5. Exit" << endl;
    cout << "************************" << endl;

}

int main()
{
    //Check balance, deposit cash, withdraw cash, show menu
    int option;
    double balance = 1000;
    double depositAmount;
    double withdrawAmount;
    string transfereeName;
    double transferAmount;
    unsigned int transfereeAccountNo;

    do{
    showMenu();
    cout << "Choose Option: ";
    cin >> option;
    system("cls");
    switch (option)
    {
    case 1:
        cout << "Balance is: " << balance << endl;
        break;

    case 2:
        cout << "Deposit amount: ";
        cin >> depositAmount;
        balance = balance + depositAmount;
        break;

    case 3:
        cout << "Withdraw amount: ";
        cin >> withdrawAmount;
        if (withdrawAmount < balance)
        {
            balance = balance - withdrawAmount;
        }
        else
            cout << "Not enough money!" << endl;
        break;

    case 4:
        cout <<  "Transferee's account number: ";
        cin >> transfereeAccountNo;
        cout <<  "Transferee's Name: ";
        cin >> transfereeName;
        cout <<  "Transfer amount: ";
        cin >> transferAmount;
        if(transferAmount < balance)
        {
            balance = balance - transferAmount;
            cout << "Your transaction is successful!" << endl;
            cout << transferAmount << " is transferred from your account to " << transfereeName << "'s account." << endl;
        }
        else  
            cout << "Transfer amount exceeding your balance!" << endl;
        break;

    default:
        break;
    }
    } while(option!=5);
}
