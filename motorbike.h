// ����������� �������� ������� "������������ ��������". � ����������� ������� ������ ����������� ����� ����� ����������� �������
//(���� - �����, ������ �������, ��������� ���������, ��������� ���������, ����������������, ���������� ���� ��� ����������).
//������� �������������� ����� ����������� ������.������� ������ ���������� �������� ������.������ ������� ��������� �� ������ �������.
//��������� ������� ������ � ���������� �����, ����������� ������.

#pragma once
#include "Transport.h"
class motorbike :
    public Transport
{
public:
	motorbike();
	void Fuel();
	void Output();
	void Consumption();
	void Price();
	void Carrying();
	void Passengers();
};

