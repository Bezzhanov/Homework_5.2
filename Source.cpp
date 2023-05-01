#include <iostream>
/*
Базовые классы - Triangle, Quadrangle
Потомки класса Triangle - RightTriangle, IsoscelesTriangle, EquilateralTriangle;
Потомки класса Quadrangle - Square, Parallelogram;
Потомки класса Parallelogram - Rhombus, Rectangle;
*/

class Triangle {

public:

protected:

};

class RightTriangle: public Triangle {

public:

protected:

};

class IsoscelesTriangle : public Triangle {

public:

protected:

};

class EquilateralTriangle : public Triangle {

public:

protected:

};


class Quadrangle {

public:

protected:

};

class Parallelogram : public Quadrangle {

public:

protected:

};

class Rectangle : public Parallelogram {

public:

protected:

};

class Square : public Quadrangle {

public:

protected:

};

class Rhombus : public Parallelogram {

public:

protected:

};


int main() {







	return 0;
}