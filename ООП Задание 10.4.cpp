// Реализовать иерархию классов "Транспортное средство". В абстрактном базовом классе реализовать набор чисто виртуальных методов
//(ввод - вывод, расход топлива, получение стоимости, установка стоимости, грузоподъёмность, количество мест для пассажиров).
//Потомки переопределяют чисто виртуальные методы.Создать массив указателей базового класса.Каждый элемент указывает на объект потомка.
//Поочерёдно вызывая методы в переборном цикле, освобождаем память.

#include <iostream>
#include"Transport.h"
#include"airplane.h"
#include"vessel.h"
#include"bus.h"
#include"car.h"
#include"motorbike.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    Transport* transport[5] = { new airplane(), new vessel(), new bus(), new car(), new motorbike() };

    for (int i = 0; i < 5; i++) {
        transport[i]->Fuel();
        transport[i]->Carrying();
        transport[i]->Passengers();
        transport[i]->Consumption();
        transport[i]->Price();
        transport[i]->Output();
        delete transport[i];
    }
    
}