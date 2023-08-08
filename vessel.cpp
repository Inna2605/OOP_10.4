// ����������� �������� ������� "������������ ��������". � ����������� ������� ������ ����������� ����� ����� ����������� �������
//(���� - �����, ������ �������, ��������� ���������, ��������� ���������, ����������������, ���������� ���� ��� ����������).
//������� �������������� ����� ����������� ������.������� ������ ���������� �������� ������.������ ������� ��������� �� ������ �������.
//��������� ������� ������ � ���������� �����, ����������� ������.

#include<iostream>
#include "vessel.h"
using namespace std;

vessel::vessel():Transport(){}

void vessel::Fuel()
{
	cout << "������� ���������� ���������������� ������� ������: ";
	cin >> fuel;
}

void vessel::Output()
{
	cout << "\n���������������� ����� " << carrying
		<< "\n���������� ���������������� ������� ������ " << fuel
		<< "\n���������� ���� ��� ���������� �� ����� " << passengers
		<< "\n��������� �������� �� ����� " << price
		<< "\n������ ������� ����� " << consumption << endl << endl;
}

void vessel::Consumption()
{
	float cargo, distance;
	cout << "������� ���������� ������������ ����� �� �����: ";
	cin >> cargo;
	cout << "������� ����� ���������� ���������� �����: ";
	cin >> distance;

	consumption = (fuel / carrying) * ((passengers + cargo) / distance);
}

void vessel::Price()
{
	cout << "������� ��������� �������� �� �����: ";
	cin >> price;
}

void vessel::Carrying()
{
	cout << "������� ���������������� �����: ";
	cin >> carrying;
}

void vessel::Passengers()
{
	cout << "������� ���������� ���� ��� ���������� �� �����: ";
	cin >> passengers;
}
