#include <iostream>
#include <string>
using namespace std;

struct Date{
    int year;
    string month;
    int day;
};

struct Point {
    int x, y;
};

void printDate(Date& d){
    cout << "Date: " << d.month << " " << d.day << ", " << d.year << endl;
}

void printPoint(Point& p){
    cout << "("<< p.x << "," << p.y << ")" << endl;
};

int main(){
    Date dob {2001, "March", 21};
    Date WeddingDay {2025, "Sep", 25};

    Point p, q, h;
    // Point p = (10, 30)

    char trash;
    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    

    printDate(dob);
    printDate(WeddingDay);
    printPoint(p);
    printPoint(q);

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;

    printPoint(h);
    return 0;
}