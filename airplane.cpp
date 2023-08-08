// ����������� �������� ������� "������������ ��������". � ����������� ������� ������ ����������� ����� ����� ����������� �������
//(���� - �����, ������ �������, ��������� ���������, ��������� ���������, ����������������, ���������� ���� ��� ����������).
//������� �������������� ����� ����������� ������.������� ������ ���������� �������� ������.������ ������� ��������� �� ������ �������.
//��������� ������� ������ � ���������� �����, ����������� ������.

#include<iostream>
#include "airplane.h"
using namespace std;


airplane::airplane():Transport(){}

void airplane::Fuel()
{
	cout << "������� ���������� ���������������� ������� ���������: ";
	cin >> fuel;
}

void airplane::Output()
{
	cout << "\n���������������� �������� " << carrying
		<< "\n���������� ���������������� ������� " << fuel
		<< "\n���������� ���� ��� ���������� � �������� " << passengers
		<< "\n��������� �������� " << price
		<< "\n������ ������� �������� " << consumption << endl << endl;
}

void airplane::Consumption()
{
	float cargo, distance;
	cout << "������� ���������� ������������ ����� � ��������: ";
	cin >> cargo;
	cout << "������� ����� ���������� ��������� �������: ";
	cin >> distance;

	consumption = (fuel / carrying) * ((passengers + cargo) / distance);
}

void airplane::Price()
{
	cout << "������� ��������� ������ � ��������: ";
	cin >> price;
}

void airplane::Carrying()
{
	cout << "������� ���������������� ��������: ";
	cin >> carrying;
}

void airplane::Passengers()
{
	cout << "������� ���������� ���� ��� ���������� � ��������: ";
	cin >> passengers;
}
