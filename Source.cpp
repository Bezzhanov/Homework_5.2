#include <iostream>
/*
������� ������ - Triangle, Quadrangle
������� ������ Triangle - RightTriangle, IsoscelesTriangle, EquilateralTriangle;
������� ������ Quadrangle - Square, Parallelogram;
������� ������ Parallelogram - Rhombus, Rectangle;
*/
class Figure {
public:
	Figure() {
			name = "������";
	};
	int get_a() { return this->a; };
	int get_b() { return this->b; };
	int get_c() { return this->c; };
	int get_d() { return this->d; };
	int get_A() { return this->A; };
	int get_B() { return this->B; };
	int get_C() { return this->C; };
	int get_D() { return this->D; };
	std::string get_name() { return this->name; };
	void print_info(Figure* x) {
		std::cout << "��� ����� ������������� ������, ������� �� ������������ ������" << std::endl;
	};

protected:
	int a{};
	int b{};
	int c{};
	int d{};
	int A{};
	int B{};
	int C{};
	int D{};
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
		this->name = "�����������";
	}
	void print_info(Figure* x) {
		std::cout << x->get_name() << ":" << std::endl;
		std::cout << "�������: " << "a=" << x->get_a() << " b=" << x->get_b() << " c=" << x->get_c() << std::endl;
		std::cout << "����: " << "A=" << x->get_A() << " B=" << x->get_B() << " C=" << x->get_C() << std::endl;
		std::cout << std::endl;
	};
protected:

};
//������������� �����������.
//��� �������� ���������� ������ ���������� �������:
//������� a,b,c � 2 ���� - A � B
//���� C ����� 90 �������� �� ���������.
class RightTriangle : public Triangle {

public:
	RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90 ) {
		name = "������������� �����������";

	};
protected:

};
//�������������� �����������
//��� �������� ���������� ������ ���������� �������:
//������� a � b, ���� A � B
//������� a = c, ���� A = C �� ���������.
class IsoscelesTriangle : public Triangle {
	
public:
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
		name = "�������������� �����������";
	};
protected:

};
//�������������� �����������:
//��� �������� ���������� ������ ���������� �������:
//����� ������ - a.
//���� �� ��������� ����� 60 ��������
class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a) :Triangle(a, a, a, 60, 60, 60) {
		name = "�������������� �����������";
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
		this->name = "���������������";
	}
	void print_info(Figure* x) {
		std::cout << x->get_name() << ":" << std::endl;
		std::cout << "�������: " << "a=" << x->get_a() << " b=" << x->get_b() << " c=" << x->get_c() << " d=" << x->get_d() << std::endl;
		std::cout << "����: " << "A=" << x->get_A() << " B=" << x->get_B() << " C=" << x->get_C() <<  " D=" << x->get_D() << std::endl;
		std::cout << std::endl;
	};

protected:
};

//�������������.
//��� �������� ���������� ������ ���������� �������:
//����� ������ - a � b, ���� A � B
//������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����
class Parallelogram : public Quadrangle {

public:
	Parallelogram(int a, int b, int A, int B) :Quadrangle(a,b,a,b, A, B, A, B) {

		this->name = "�������������";
	};

protected:

};

//�������������
//��� �������� ���������� ������ ���������� ��������:
//����� ������ - a � b
//������� a,c � b,d ������� �����, ��� ���� ����� 90
class Rectangle : public Quadrangle {
public:
	Rectangle(int a, int b) :Quadrangle(a,b,a,b,90,90,90,90) {
	
		this->name = "�������������";
	};

};

//�������
//��� �������� ���������� ������ ���������� �������:
//����� ������ - a.
//���� �� ��������� ����� 90 ��������
class Square : public Quadrangle {

public:
	Square(int a) :Quadrangle(a,a,a,a, 90,90,90,90) {
		this->name = "�������";
	};
protected:

};

//����
//��� �������� ���������� ������ ���������� �������:
//����� ������ - a, ���� A � B
//��� ������� �����, ���� A,C � B,D ������� �����
class Rhombus : public Parallelogram {
public:
	Rhombus(int a, int A, int B) :Parallelogram(a,a,A,B) {
	
		this->name = "����";
	};

};



int main() {
	setlocale(LC_ALL, "Ru");
	Triangle t(10,20,30,50,60,70);
	t.print_info(&t);
	RightTriangle rt(10, 20, 30, 50, 60);
	rt.print_info(&rt);
	IsoscelesTriangle it(10, 20, 50,60);
	it.print_info(&it);
	EquilateralTriangle et(30);
	et.print_info(&et);
	Quadrangle q(10,20,30,40,50,60,70,80);
	q.print_info(&q);
	Rectangle r(10, 20);
	r.print_info(&r);
	Square s(20);
	s.print_info(&s);
	Parallelogram p(20, 30, 30, 40);
	p.print_info(&p);
	Rhombus rmb(30, 30, 40);
	rmb.print_info(&rmb);
	return 0;
}