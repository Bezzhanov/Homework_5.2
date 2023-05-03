#include <iostream>

class Figure {
public:
	Figure() {
		name = "Фигура";
	};

	std::string get_name() { return this->name; };
	virtual void print() = 0;

protected:

	std::string name{};
};
class Triangle : public Figure {

public:
	Triangle() {};
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		this->name = "Треугольник";
	}

	void print() {
		std::cout << this->get_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << this->get_a() << " b=" << this->get_b() << " c=" << this->get_c() << std::endl;
		std::cout << "Углы: " << "A=" << this->get_A() << " B=" << this->get_B() << " C=" << this->get_C() << std::endl;
		std::cout << std::endl;
	};


	int get_a() { return this->a; };
	int get_b() { return this->b; };
	int get_c() { return this->c; };
	int get_A() { return this->A; };
	int get_B() { return this->B; };
	int get_C() { return this->C; };
protected:
	int a{};
	int b{};
	int c{};
	int A{};
	int B{};
	int C{};
};

class RightTriangle : public Triangle {

public:
	RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
		name = "Прямоугольный треугольник";

	};
protected:

};

class IsoscelesTriangle : public Triangle {

public:
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
		name = "Равнобедренный треугольник";
	};
protected:

};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a) :Triangle(a, a, a, 60, 60, 60) {
		name = "Равносторонний треугольник";
	}

protected:

};


class Quadrangle : public Figure {
public:
	Quadrangle() {};
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Четырёхугольник";
	}
	void print() {
		std::cout << this->get_name() << ":" << std::endl;
		std::cout << "Стороны: " << "a=" << this->get_a() << " b=" << this->get_b() << " c=" << this->get_c() << " d=" << this->get_d() << std::endl;
		std::cout << "Углы: " << "A=" << this->get_A() << " B=" << this->get_B() << " C=" << this->get_C() << " D=" << this->get_D() << std::endl;
		std::cout << std::endl;
	};
	int get_a() { return this->a; };
	int get_b() { return this->b; };
	int get_c() { return this->c; };
	int get_d() { return this->d; };
	int get_A() { return this->A; };
	int get_B() { return this->B; };
	int get_C() { return this->C; };
	int get_D() { return this->D; };

protected:
	int a{};
	int b{};
	int c{};
	int d{};
	int A{};
	int B{};
	int C{};
	int D{};
};


class Parallelogram : public Quadrangle {

public:
	Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B) {

		this->name = "Параллелограмм";
	};

protected:

};


class Rectangle : public Quadrangle {
public:
	Rectangle(int a, int b) :Quadrangle(a, b, a, b, 90, 90, 90, 90) {

		this->name = "Прямоугольник";
	};

};


class Square : public Quadrangle {

public:
	Square(int a) :Quadrangle(a, a, a, a, 90, 90, 90, 90) {
		this->name = "Квадрат";
	};
protected:

};


class Rhombus : public Parallelogram {
public:
	Rhombus(int a, int A, int B) :Parallelogram(a, a, A, B) {

		this->name = "Ромб";
	};

};

void print_info(Figure* x) {
	x->print();
}

int main() {
	setlocale(LC_ALL, "Ru");
	Triangle t(10, 20, 30, 50, 60, 70);
	print_info(&t);
	RightTriangle rt(10, 20, 30, 50, 60);
	print_info(&rt);
	IsoscelesTriangle it(10, 20, 50, 60);
	print_info(&it);
	EquilateralTriangle et(30);
	print_info(&et);
	Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&q);
	Rectangle r(10, 20);
	print_info(&r);
	Square s(20);
	print_info(&s);
	Parallelogram p(20, 30, 30, 40);
	print_info(&p);
	Rhombus rmb(30, 30, 40);
	print_info(&rmb);
	return 0;
}