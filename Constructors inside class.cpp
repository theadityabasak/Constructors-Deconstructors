//23070123007 Aditya basak
//Aim:Implemention of Constructors and Destructors to Define Constructor Inside Class.
#include <iostream>
using namespace std;

class date {
    int d;
    int m;
    int y;
public:
    date() {
        cout << "Constructor called" << endl;
        d = 4;
        m = 9;
        y = 2024;
    }

    void display() {
        cout << "Today's date is: " << d << "/" << m << "/" << y << endl;
    }
};

int main() {
    date mydate;
    mydate.display();

    return 0;
}
//output
/*Constructor called
Today's date is: 4/9/2024
*/