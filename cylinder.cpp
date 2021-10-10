

#include "Point2.h"
const double PI = 3.1415926;

class Circle : protected Point {
    protected:
        double radius;
    public:
        Circle(double R, int X, int Y) : Point(X, Y)
        {
            radius = R;
        }
        double area()
        {
            return PI * radius * radius;
        }
        void ShowCir()
        {
            ShowXY();
            cout << "Radius: " << radius << endl;
        }
};