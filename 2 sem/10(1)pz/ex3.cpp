#include <iostream>
#include <cmath> 
using namespace std;

class AdHocSquare {
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();

private:
    double side;
};

AdHocSquare::AdHocSquare(double side) {
    set_side(side); 
}

void AdHocSquare::set_side(double side) {
    this->side = side;
}

double AdHocSquare::get_area() {
    return side * side;
}

class LazySquare {
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();

private:
    double side;
    double area;
    bool side_changed;
};

LazySquare::LazySquare(double side) {
    this->side = side;
    this->area = 0.0; 
    this->side_changed = true;
}

void LazySquare::set_side(double side) {
    if (this->side != side) { 
        this->side = side;
        this->side_changed = true; 
    }
}

double LazySquare::get_area() {
    if (side_changed) { 
        area = side * side;
        side_changed = false; 
    }
    return area;
}

int main() {
    AdHocSquare adHocSquare(4);
    cout << "AdHocSquare area: " << adHocSquare.get_area() << endl;

    adHocSquare.set_side(2.0);
    cout << "AdHocSquare area after side change: " << adHocSquare.get_area() << endl;

    LazySquare lazySquare(4);
    cout << "LazySquare area: " << lazySquare.get_area() << endl;

    lazySquare.set_side(2.0);
    cout << "LazySquare area after side change: " << lazySquare.get_area() << endl;

    return 0;
}