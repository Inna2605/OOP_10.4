// ����������� �������� ������� "������������ ��������". � ����������� ������� ������ ����������� ����� ����� ����������� �������
//(���� - �����, ������ �������, ��������� ���������, ��������� ���������, ����������������, ���������� ���� ��� ����������).
//������� �������������� ����� ����������� ������.������� ������ ���������� �������� ������.������ ������� ��������� �� ������ �������.
//��������� ������� ������ � ���������� �����, ����������� ������.

#pragma once
#include "Transport.h"
class bus :
    public Transport
{
public:
    bus();
    void Fuel();
    void Output();
    void Consumption();
    void Price();
    void Carrying();
    void Passengers();
};

