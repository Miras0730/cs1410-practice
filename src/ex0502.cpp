#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string fullName;

    cout << "Enter age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "HEllo! YOU are " << age << " Years Old, and your full name is " << fullName << endl;

    return 0;

}