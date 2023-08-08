// ����������� �������� ������� "������������ ��������". � ����������� ������� ������ ����������� ����� ����� ����������� �������
//(���� - �����, ������ �������, ��������� ���������, ��������� ���������, ����������������, ���������� ���� ��� ����������).
//������� �������������� ����� ����������� ������.������� ������ ���������� �������� ������.������ ������� ��������� �� ������ �������.
//��������� ������� ������ � ���������� �����, ����������� ������.

#pragma once
class Transport
{
protected:
	float fuel;//������������� �������
	float consumption;//������ �������
	float price;//����
	float carrying;//����������������
	int passengers;//���������
public:
	Transport();
	virtual void Fuel() = 0;
	virtual void Output() = 0;
	virtual void Consumption() = 0;
	virtual void Price() = 0;
	virtual void Carrying() = 0;
	virtual void Passengers() = 0;
};

