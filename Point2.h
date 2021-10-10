

#include <iostream>
using namespace std;

class Point {
    protected:
        int X, Y;
    public:
        Point(int X, int Y)
        {
            this->X = X, this->Y = Y;
        }
        void move(int OffX, int OffY)
        {
            X += OffX, Y += OffY;
        }
        void ShowXY()
        {
            cout << "Centre of Circle: ";
            cout << "(" << X << ", " << Y << ")" << endl;
        }
};