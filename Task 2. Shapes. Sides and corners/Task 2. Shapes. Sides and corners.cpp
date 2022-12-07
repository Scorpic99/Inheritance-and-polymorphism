#include <iostream>

void print_shapes(Triangle &vlt, Quadrilateral &qua, std::string nameShapes) {
    if (nameShapes == "Треугольник") {
        int a, b, c, A, B, C;
        vlt.get_triangle(a, b, c, A, B, C);
        std::cout << vlt.get_name() << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    else if (nameShapes == "Четырехугольник") {
        int a, b, c, d, A, B, C, D;
        qua.get_quadrilateral(a, b, c, d, A, B, C, D);
        std::cout << qua.get_name() << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
    

}

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

class Triangle : public Shapes {
public:
    std::string get_name() {
        return name;
    }
    void get_triangle(int& a, int& b, int& c, int& A, int& B, int& C) {
        a = this->a;
        b = this->b;
        c = this->c;
        A = this->A;
        B = this->B;
        C = this->C;
    }
    int get_sides() {
        return sides;
    }
    Triangle() {
        sides = 3;
        name = "Треугольник";
    }
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
};

class RectangularTriangle : public Triangle {//прямоугольный треугольник
public:
    RectangularTriangle(int a, int b, int c, int A, int B ) {
        C = 90;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->name = "Прямоугольный треугольник";
    }
};

class IsoscelesTriangle : public Triangle {//равнобедренный треугольник
public:
    IsoscelesTriangle(int a, int b, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = A;
        name = "Равнобедренный треугольник";
    }
};

class EquilateralTriangle : public Triangle {//равносторонний треугольник
public:
    EquilateralTriangle(int side) {
        a = side;
        b = side;
        c = side;
        A = 60;
        B = 60;
        C = 60;
        name = "Равносторонний треугольник";
    }
};

class Quadrilateral : public Shapes {
public:
    std::string get_name() {
        return name;
    }
    void get_quadrilateral(int& a, int& b, int& c, int& d, int& A, int& B, int& C, int& D) {
        a = this->a;
        b = this->b;
        c = this->c;
        d = this->d;
        A = this->A;
        B = this->B;
        C = this->C;
        D = this->D;
    }
    int get_sides() {
        return sides;
    }
    Quadrilateral() {
        sides = 4;
        name = "Четырехугольник";
    }
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
};

class Rectangle : public Quadrilateral {//прямоугольник
public:
    Rectangle(int oneSide, int twoSide) {
        a = oneSide;
        b = twoSide;
        c = oneSide;
        d = twoSide;
        A = 90; B = 90; D = 90; C = 90;
        name = "Прямоугольник";
    }
};

class Square : public Quadrilateral {//квадрат
public:
    Square(int side) {
        a = side;
        b = side;
        c = side;
        d = side;
        A = 90; B = 90; C = 90; D = 90;
        name = "Квадрат";
    }
};

class Parallelogram : public Quadrilateral {//параллелограмм
public:
    Parallelogram(int a, int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
        name = "Параллелограмм";
    }
};

class Rhomb : public Quadrilateral {//ромб
public:
    Rhomb(int a, int b, int c, int d, int A, int B) {
        
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
        name = "Ромб";
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 50, b = 60, c = 70, d = 55, A = 45, B = 80, C = 75, D = 66;

    Shapes shapes;
    //Triangle triangle;
    //Quadrilateral quadrilateral;


    RectangularTriangle RT(a, b, c, A, B);
    //print_shapes(triangle, quadrilateral ,"Треугольник");
    RT.get_triangle(a, b, c, A, B, C);
	std::cout << RT.get_name() << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    IsoscelesTriangle IT(a, b, A, B, C);
    //print_shapes(triangle, quadrilateral ,"Треугольник");
    IT.get_triangle(a, b, c, A, B, C);
    std::cout << IT.get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    EquilateralTriangle ET(a);
    //print_shapes(triangle, quadrilateral ,"Треугольник");
    ET.get_triangle(a, b, c, A, B, C);
    std::cout << ET.get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    Rectangle Rec(a, b);
    //print_shapes(triangle, quadrilateral ,"Четырехугольник");
    Rec.get_quadrilateral(a, b, c, d, A, B, C, D);
    std::cout << Rec.get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    Square S(a);
    //print_shapes(triangle, quadrilateral ,"Четырехугольник");
    S.get_quadrilateral(a, b, c, d, A, B, C, D);
    std::cout << S.get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    Parallelogram P(a, b, A, B);
    //print_shapes(triangle, quadrilateral ,"Четырехугольник");
    P.get_quadrilateral(a, b, c, d, A, B, C, D);
    std::cout << P.get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    Rhomb R(a, b, c, d, A, B);
    //print_shapes(triangle, quadrilateral ,"Четырехугольник");
    R.get_quadrilateral(a, b, c, d, A, B, C, D);
    std::cout << R.get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;

}
