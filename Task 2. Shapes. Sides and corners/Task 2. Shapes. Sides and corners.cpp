#include <iostream>

class Shapes {
public:
    virtual std::string get_name() {
        return name;
    }
    virtual int get_sides() {
        return sides;
    }
    Shapes() {
        sides = 0;
        name = "Фигура";
    }
    virtual void printFigure() {
        std::cout << name << ":" << std::endl;
    }
protected:
    std::string name;
    int sides;
};
    
class Triangle : public Shapes {
public:

    std::string get_name() override{
        return name;
    }
    int get_sides() override {
        return sides;
    }
    Triangle() {
        sides = 3;
        name = "Треугольник";
    }
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
};

class RectangularTriangle : public Triangle {//прямоугольный треугольник
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    RectangularTriangle(int a, int b, int c, int A, int B){
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
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
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
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
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
    std::string get_name() override {
        return name;
    }
    int get_sides() override {
        return sides;
    }
    Quadrilateral() {
        sides = 4;
        name = "Четырехугольник";
    }

protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
};

class Rectangle : public Quadrilateral {//прямоугольник
public: 
    void printFigure() override{
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
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
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
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
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
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
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
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

void print_shapes(Shapes* shapes) {
    int a = 6, b = 26, c = 64, A = 7, B = 340, C = 45;

    RectangularTriangle objRT(a, b, c, A, B);
    shapes = &objRT;
    shapes->printFigure();
    IsoscelesTriangle objIT(a, b, 3, 3, 3);
    shapes = &objIT;
    shapes->printFigure();
    EquilateralTriangle objET(61);
    shapes = &objET;
    shapes->printFigure();
    Rectangle objRec(2, 2);
    shapes = &objRec;
    shapes->printFigure();
    Square objSqu(5);
    shapes = &objSqu;
    shapes->printFigure();
    Parallelogram objPar(3, 45, 6, 45);
    shapes = &objPar;
    shapes->printFigure();
    Rhomb objRmb(a, b, c, 9, 55, 66);
    shapes = &objRmb;
    shapes->printFigure();
}


int main()
{
    setlocale(LC_ALL, "Rus");
    
    Shapes* shapes = new Shapes;
    print_shapes(shapes);

}
