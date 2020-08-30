//
// Created by fmele on 3/14/2020.
//
//#include "point.cpp"
#include <iostream>
#include "point.cpp"
#define FALSE 0
#define TRUE 1
using namespace std;

void print(point& p1, point& p2){
    cout << "p1 < p2: " << (p1 < p2) << "\n";
    cout << "p1 > p2: " << (p1 > p2) << "\n";
    cout << "p1 <= p2: " << (p1 <= p2) << "\n";
    cout << "p1 >= p2: " << (p1 >= p2) << "\n";
    cout << "p1 == p2: " << (p1 == p2) << "\n";
    cout << "p1 != p2: " << (p1 != p2) << "\n\n";
}

ostream& operator<<(ostream& out, point& p) {
    out << p.x_coord;
    out << ", " << p.y_coord;
    out << "\n";
    return out;
}

int main() {

    //float x1, x2, y1, y2;
    //cout << "Enter two xy-coordinate points :";
    //cin >> x1 >> y1;
    //point p1(x1, y1);
    //cout << p1;

    //cin >> x2 >> y2;
    //point p2(x2,y2);
    //cout << p2;

    //cout << "comparing the two points, we get: \n";
    //print(p1, p2);
     point p1(0,0);
     point p2(1,1);
     point p3(-1,-1);
     point p4(3.5,4.6);
     point p5(4.6,3.5);
     cout << "Example points:\n";
     cout << p1 << p2 << p3 << p4 << p5;

     cout <<"Example comparisons ('0'== false, '1' == true):\n";
     cout << p1 << p1;
     print(p1, p1);
     cout << p1 << p2;
     print(p1, p2);
     cout << p3 << p2;
     print(p3, p2);
     cout << p4 << p5;
     print(p4, p5);

}


