

#include "Point2.h"
const double PI = 3.1415926;

class Circle : public Point {
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

class Cylinder : public Circle {
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
    cout << "volume: " << CY.volume() << endl << endl;

    Point P(1, 1);
    Circle Cir(15.5, 20, 20);
    Cylinder CY2(50, 15, 300, 300);

    Point * Pp;
    Pp = &P;
    Pp->ShowXY();

    P = Cir;
    P.ShowXY();

    Pp = &Cir;
    Pp->ShowXY();

    Point &Pp2 = Cir;   // 派生类对象初始化基类的引用；
    Pp2.ShowXY();

    Pp = &CY2;      // 基类指针；
    Pp->ShowXY();
    cout << endl;

    Circle &RC = CY2;  // 基类引用；
    RC.ShowCir();
    
    return 0;
}