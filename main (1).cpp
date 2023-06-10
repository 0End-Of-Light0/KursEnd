#include <iostream>
#include <chrono>
#include "HealthF.h"

using namespace std;

int main()
{
    int txa[3] = {1,2,3};
    HealthF test(33.7,0.25,125.5,18,'M');
    cout << test.getWeight() << endl; //Вес человека
    cout << test.getHeight() << endl; //Рост человека
    cout << test.getAge() << endl; //Возраст человека
    cout << test.getPeroffat() << endl; //Процент жира человека(В ввиде %/100)
    cout << test.getGender() << endl; //Пол человека (M или W)
    cout << "-------------------------" << endl;
    cout << test.bmrgb() << endl; //Формула Гарриса Бенедикта(Нужен вес, рост,возраст, пол)
    cout << test.bmrmd() << endl; //Формула Миффлена-Джеора(Нужен вес, рост,возраст, пол)
    cout << test.bmrkma() << endl; //Формула Гарриса Бенедикта(Нужен процент жира, вес)
    cout << test.Cactiv(1,5) << endl; //Физ активность (Нужен Id занятия, время в минутах)
    cout << test.CactivA(txa,5,3) << endl; //Физ активность - несколько занятий через массив (Нужен массив Id занятий, время в минутах, размер массива)
    for(int i = 0; i < 3; i++) {
        cout << test.Macel()[i] << ' '; //Белки, жиры, углеводы(Нужен вес)
    }
    cout << ' ' << endl;
    cout << test.Watercons(5) << endl; // Потребление воды в минутах
    return 0;
}
//Все функции(Формул) кроме macroelem(Возращает double Массив на 3 элемента) возращают double.