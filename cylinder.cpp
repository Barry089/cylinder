

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

class Cylinder : protected Circle {
    private:
        double height;
    public:
        Cylinder(double H, double R, int X, int Y) : Circle(R, X, Y)
        {
            height = H;
        }
        double volume()
        {
            return Circle::area() * height;
        }
        double area()
        {
            return 2 * Circle::area() + 2 * PI * radius * height;
        }
        void ShowCylinder()
        {
            ShowCir();
            cout << "Height of cylinder: " << height << endl;
        }
};

int main()
{
    Cylinder CY(50, 10, 100, 200);
    CY.ShowCylinder();

    cout << "total area: " << CY.area() << endl;
    cout << "volume: " << CY.volume() << endl;
    
    return 0;
}