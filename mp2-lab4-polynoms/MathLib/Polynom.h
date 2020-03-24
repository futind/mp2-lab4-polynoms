#pragma once

#include <string>
#include "Monom.h"

class PolynomCList {
	Monom *head;
public:
	PolynomCList();

	void maxgp(const std::string &str); //������� ������������ ������� � ��������
	void ffstr(const std::string &str); //������ ������
	void add(int _coef, int _deg); //���������� ������
	void addSorted(int _coef, int _deg); //���������� ������ �� �����������
	double calculate(double x, double y, double z); //���������� �������� � ����� ������������
	std::string ptos(); //����� ��������

	PolynomCList& operator=(const PolynomCList &Pn);
	PolynomCList operator+(const PolynomCList &Pn);
	PolynomCList operator-(const PolynomCList &Pn);
	PolynomCList operator*(const PolynomCList &Pn);
	//PolynomCList operator/(const PolynomCList &Pn);
	
};