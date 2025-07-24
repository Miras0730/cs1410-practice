#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Month{
    string name;
    int days;

};

int main(){
    
    int year;
    cout << "Enter the current year: ";
    cin >> year;
    
    Month months[]{
        {"Jan", 31},
        {"Feb", year % 4 == 0 ? 29 : 28},
        {"Ma", 31},
        {"Apr", 30},
        {"May", 31},
        {"Jun", 30},
        {"Jul", 31},
        {"Aug", 31},
        {"Sep", 30},
        {"Oct", 31},
        {"Nov", 30},
        {"Dec", 31}
    };

    // string months[12] {
    //     "Jan", "Feb", "Mar", "Ap", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    // };


    // int days[]{
    //     31, year % 4 == 0 ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    // };

    cout << setw(10) << "Month" << setw(12) << "# of days" << endl;
    for(int i = 0; i < 12; i++){
        cout << setw(10) << months[i].name << setw(12) << months[i].days << endl;
    }
}