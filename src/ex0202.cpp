#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter a day";
    string day;

    cin >> day;

    if(day == "sun" || day == "sat"){
        cout << "It's considered a weekday"<< endl;
    }
    else {
        cout << "IT's a weekday" << endl;

    }
    return 0;
}