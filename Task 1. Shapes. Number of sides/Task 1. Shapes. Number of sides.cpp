#include <iostream>

class Shapes {
public:
    std::string get_name() {
        return name;
    }
    int get_sides() {
        return sides;
    }
    Shapes() {
        sides = 0;
        name = "Фигура";
    }
protected:
    std::string name;
    int sides;
};

class Triangle: public Shapes {
public:
    std::string get_name() {
        return name;
    }
    int get_sides() {
        return sides;
    }
    Triangle() {
        sides = 3;
        name = "Треугольник";
    }
};

class Quadrilateral: public Shapes {
public:
    std::string get_name() {
        return name;
    }
    int get_sides() {
        return sides;
    }
    Quadrilateral() {
        sides = 4;
        name = "Четырехугольник";
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Shapes shapes;
    Triangle triangle;
    Quadrilateral quadrilateral;
    
    std::cout << "Количество сторон: " << std::endl;
    std::cout << shapes.get_name() << ": " << shapes.get_sides() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides() << std::endl;
    std::cout << quadrilateral.get_name() << ": " << quadrilateral.get_sides() << std::endl;
}

