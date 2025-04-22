#include <iostream>
#include "vector.cpp"

int main(){
    std::cout << "static polimorfizm" << std::endl;
    Vector2D v2(1.0, 2.0);
    Vector3D v3(1.0, 2.0, 3.0);
    
    v2.printcoor(); // Вызов Vector2D::print()
    std::cout << std::endl;
    v3.printcoor(); // Вызов Vector3D::print()
    std::cout << std::endl;

    std::cout << "dinamic polimorfizm" << std::endl;

    Vector2D* v2_ptr{&v2};

    v2_ptr->printcoor();
    std::cout << std::endl;
    v2_ptr = &v3;
    v2_ptr -> printcoor();
    std::cout << std::endl;

}