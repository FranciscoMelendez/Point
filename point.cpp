//
// Created by fmele on 3/14/2020.
//
#include <iostream>
#include <math.h>

using namespace std;
class point {
private:
    float x_coord;
    float y_coord;
public:
    point(float x, float y) {
        x_coord = x;
        y_coord = y;
    }
    float distance() {
        return sqrt(pow(x_coord, 2) + pow(y_coord, 2));
    }
    //    friend void print(point& p1, point& p2);
    friend ostream& operator<<(ostream& out, point& p);
    friend bool operator<(point& lhs, point& rhs);
    friend bool operator>(point& lhs, point& rhs);
    friend bool operator>=(point& lhs, point& rhs);
    friend bool operator==(point& lhs, point& rhs);
    friend bool operator<=(point& lhs, point& rhs);
    friend bool operator!=(point& lhs, point& rhs);
};

bool operator<(point& lhs, point& rhs) {
    if (lhs.distance() < rhs.distance()) {
        return true;
    }
    return false;
}

bool operator>(point& lhs, point& rhs) {
    return operator<(rhs, lhs);
    return false;
}

bool operator>=(point& lhs, point& rhs) {
    return !operator<(lhs, rhs);
}

bool operator==(point& lhs, point& rhs) {
    return (!operator<(lhs, rhs) && !operator<(rhs, lhs));
}

bool operator<=(point& lhs, point& rhs) {
    if (operator<(lhs, rhs) == true) {
        return true;
    }
    if (operator==(lhs, rhs) == true) {
        return true;
    }
    return false;
}

bool operator!=(point& lhs, point& rhs) {
    return (!operator==(lhs, rhs));
}
