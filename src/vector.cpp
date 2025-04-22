#include <iostream>
class Vector2D{
protected:
    double x;
    double y;

public:
    Vector2D(double x1, double y1): x{x1}, y{y1}{}
    
    virtual void printcoor(){
        std::cout << "x = "<< x << ", y = " << y;
    }
};

class Vector3D : public Vector2D
{
protected:
    double z;

public:
    Vector3D(double x1, double y1, double z1): Vector2D(x1, y1), z{z1} {}

    void printcoor(){
        Vector2D::printcoor();
        std::cout << ", z = " << z;
    }
};
