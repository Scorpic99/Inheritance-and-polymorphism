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
        validity = "Правельная";
    }
    virtual void printFigure() {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << std::endl;
    }
protected:
    std::string name;
    int sides;
    std::string validity;
};

class Triangle : public Shapes {
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
    std::string get_name() override {
        return name;
    }
    int get_sides() override {
        return sides;
    }
    bool correct = true;
    void get_triangle(int& a, int& b, int& c, int& A, int& B, int& C) {
        a = this->a;
        b = this->b;
        c = this->c;
        A = this->A;
        B = this->B;
        C = this->C;
    }
    Triangle(){}
    Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = C;
        sides = 3;
        name = "Треугольник";
        if ((A + B + C) == 180)
            validity = "Правельная";
        else
            validity = "Неправельная";
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
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    RectangularTriangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        sides = 3;
        name = "Прямоугольный треугольник";
        if (C == 90 && (A + B + C) == 180)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};

class IsoscelesTriangle : public Triangle {//равнобедренный треугольник
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    IsoscelesTriangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = A;
        sides = 3;
        name = "Равнобедренный треугольник";
        if (a == c && A == C && (A + B + C) == 180)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};

class EquilateralTriangle : public Triangle {//равносторонний треугольник
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    EquilateralTriangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        sides = 3;
        name = "Равносторонний треугольник";
        if (a == b && b == c && A == 60 && B == 60 && C == 60 && (A + B + C) == 180)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};

class Quadrilateral : public Shapes {
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
    std::string get_name() {
        return name;
    }
    bool correct = true;
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
    Quadrilateral(){}
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        sides = 4;
        name = "Четырехугольник";
        if ((A + B + C + D) == 360)
            validity = "Правельная";
        else
            validity = "Неправельная";
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
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        sides = 4;
        name = "Прямоугольник";
        if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90 && (A + B + C + D) == 360)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};

class Square : public Quadrilateral {//квадрат
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    Square(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        sides = 4;
        name = "Квадрат";
        if (a == c && b == d && a == c && A == 90 && B == 90 && C == 90 && D == 90 && (A + B + C + D) == 360)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};

class Parallelogram : public Quadrilateral {//параллелограмм
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        sides = 4;
        name = "Параллелограмм";
        if (a == c && b == d && A == C && B == D && (A + B + C + D) == 360)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};

class Rhomb : public Quadrilateral {//ромб
public:
    void printFigure() override {
        std::cout << name << ":" << std::endl;
        std::cout << validity << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
    bool correct = true;
    Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        sides = 4;
        name = "Ромб";
        if (A == C && B == D && (A + B + C + D) == 360)
            validity = "Правельная";
        else
            validity = "Неправельная";
    }
};


void print_shapes(Shapes* shapes) {
    
    shapes->printFigure();
}

int main()
{
    setlocale(LC_ALL, "Rus");

    Shapes* shapes = new Shapes;

    print_shapes(shapes);
    Triangle objTri(10, 20, 30, 50, 60, 70);
    shapes = &objTri;
    print_shapes(shapes);
    RectangularTriangle objRT(10, 20, 30, 50, 60, 90);
    shapes = &objRT;
    print_shapes(shapes);
    RectangularTriangle objRT2(10, 20, 30, 50, 40, 90);
    shapes = &objRT2;
    print_shapes(shapes);
    IsoscelesTriangle objIT(10, 20, 10, 50, 60, 50);
    shapes = &objIT;
    print_shapes(shapes);
    EquilateralTriangle objET(30, 30, 30, 60, 60, 60);
    shapes = &objET;
    print_shapes(shapes);
    Quadrilateral objQuad(61, 4, 5, 6, 5, 4, 4, 5);
    shapes = &objQuad;
    print_shapes(shapes);
    Rectangle objRec(10, 20, 10, 20, 90, 90, 90, 90);
    shapes = &objRec;
    print_shapes(shapes);
    Square objSqu(20, 20, 20, 20, 90, 90, 90, 90);
    shapes = &objSqu;
    print_shapes(shapes);
    Parallelogram objPar(20, 30, 20, 30, 30, 40, 30, 40);
    shapes = &objPar;
    print_shapes(shapes);
    Rhomb objRmb(30, 30, 30, 30, 30, 40, 30, 40);
    shapes = &objRmb;
    print_shapes(shapes);
}

