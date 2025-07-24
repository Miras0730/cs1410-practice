#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuadrant(double deg);

string findQuadrant(double deg){
    double rad = 3.14 * deg / 180;
    if(sin(rad) >= 0 && cos(rad) >=0){
        return "Quadrant I";
    } else if(sin(rad) >= 0 && cos(rad) <0){
        return "Quadrant II";
    } else if(sin(rad) < 0 && cos(rad) <0){
        return "Quadrant III";
    } else {
        return "Quadrant IV";
    }

}

int main(){
    
    cout << findQuadrant(23) << endl;
    cout << findQuadrant(124) << endl;
    cout << findQuadrant(246) << endl;
    cout << findQuadrant(360) << endl;

    return 0;

}