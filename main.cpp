#include <iostream>
#include <vector>
#include "Nightingale.h"
#include "Sparrow.h"
//Ticket5;

std::vector<int> getPair() {
    std::vector<int> out;
    int min1 = INT32_MAX;
    int min2 = INT32_MAX;
    out.push_back(min1);
    out.push_back(min2);
    int generalSum = 0;
    while (generalSum <= 50) {
        std::cout << "Input int number" << std::endl;
        int x;
        std::cin >> x;
        generalSum += x;
        if (x < out[0] || x < out[1]) {
            if(x<out[0]){
                if(out[0] < out[1]){
                    out[1] = out[0];
                }
                out[0] = x;
            }else{
                if(out[1] < out[0]){
                    out[0] = out[1];
                }
                out[1] = x;
            }
        }
    }
    return out;
}

void testPair(std::vector<int> result) {
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }
}

void testBirds() {
    Nightingale nightingale("soooooong");
    Sparrow sparrow("soooooong");
    std::vector<Bird *> birds;
    birds.push_back(&sparrow);
    birds.push_back(&nightingale);
    for (int i = 0; i < birds.size(); i++) {
        (*birds[i]).sing();
    }
}

int main() {
    testPair(getPair());
    testBirds();
    return 0;
}

//TODO:  1st
//функция - это именованный блок кода. Определение функции выглядит
// так: тип возвращаемого значения (void, если функция ничего не возвращает),
// имя функции, далее в круглых скобках параметры (их может быть произвольное к-во,
// в том числе и 0), далее в фигурных скобках следует тело функции. Локальная
// перемнная - это переменная, объявленная в каком-то блоке кода. Когда выполнение достигает
// конца блока, локальная перемнная уничтожается (об этом нужно помнить при возврате ссылок
// из функций). Статическая локальная переменная, в отличие от обычной, продолжает
// существовать от вызова к вызову. Это может быть удобно, например, для создания счётчика вызовов функции

//TODO: 2nd
//статические поля класса существуют весь жизненный цикл программы.
// Статические являются общими для всех объектов, т.к. принадлежат классу, а не какому-то
// конкретному объекту. Для таких полей нужно глобальное определение вне класса.
// Доступ к ним осуществляется через имя класса и "::",
// а не через объект. Статические методы, как и ст. поля, тоже принадлежат классу. Они не могут
// работать с обычными полями (и со ссылкой this), толко со статическими.
